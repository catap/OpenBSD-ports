# $OpenBSD: BinaryScan.pm,v 1.7 2023/05/14 09:00:33 espie Exp $
# Copyright (c) 2011 Marc Espie <espie@openbsd.org>
#
# Permission to use, copy, modify, and distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
# OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

use v5.36;

# scan binaries through objdump and record the results
# - retrieves files through source (see FileSource)
# - pass the result off to a recorder

# Public interface is mostly:
# 	set_source, retrieve_and_scan_binary, dont_scan, finish_scanning

# it needs a source set to operate
# it uses $state to display errors and to access the recorder

package OpenBSD::BinaryScan;
sub new($class, $state)
{
	bless {state => $state}, $class;
}

sub set_source($self, $source)
{
	$self->{source} = $source;
}

sub fatal($self, @msg)
{
	$self->{state}->fatal(@msg);
}

sub logger($self)
{
	return $self->{state}{logger};
}

sub dest($self)
{
	return $self->{state}{dump};
}

sub start($self, @names)
{
	unless (open(my $cmd, '-|')) {
		if ($self->logger) {
			my $log = $self->logger->log($self->command.".err");
			open(STDERR, '>>', $log) or
			    $self->fatal("Can't redirect: #1 #2", $log, $!);
		} else {
			open(STDERR, '>', '/dev/null');
		}
		chdir($self->{source}->directory) or 
		    $self->fatal("Bad directory #1: #2", 
		    	$self->{source}->directory, $!);
		$self->exec(@names) or 
		    $self->fatal("exec #1: #2", $self->command, $!);
	} else {
		return $cmd;
	}
}

sub record_libs($self, $fullname, @libs)
{
	my $fh;
	if (defined $fullname && defined $self->logger) {
		$fh = $self->logger->open("$fullname.log") or die "$!";
		print $fh "Libraries: ";
	}

	for my $lib (@libs) {
		# don't look for modules
		next if $lib =~ m/\.so$/;
		$self->dest->record($lib, $fullname);
		if (defined $fh) {
			print $fh "$lib ";
		}
	}
	if (defined $fh) {
		print $fh "\n";
	}
}

sub retrieve_and_scan_binary($self, $item, $fullname)
{
	my $n = $self->{source}->retrieve($self->{state}, $item);
	# make sure to turn into a relative path
	$n =~ s/^\/*//;

	$self->scan_binary($item, $fullname, $n);
}

sub finish_retrieve_and_scan($self, $item, $o)
{
	$o->{name} = $item->fullname;
	$o->create;
	my $n = $item->fullname;
	$n =~ s/^\/*//;

	$self->scan_binary($item, File::Spec->canonpath($item->fullname), $n);
}

sub dont_scan($self, $item)
{
	$self->{source}->skip($item);
}

package OpenBSD::BinaryScan::Objdump;
our @ISA = qw(OpenBSD::BinaryScan);

sub command($) { 'objdump' }

sub exec($self, @names)
{
	exec($self->command, '-p', @names);
}

sub parse($self, $cmd, $names)
{
	my $fullname;
	my @l = ();
	my $linux_binary = 0;
	my $fh;
	if ($self->logger) {
		$fh = $self->logger->open("objdump.out");
	}
	while (my $line = <$cmd>) {
		if ($fh) {
			print $fh $line;
		}
		chomp $line;
		if ($line =~ m/^(.*)\:\s+file format/) {
			my $k = $1;
			$self->record_libs($fullname, @l) unless $linux_binary;
			$linux_binary = 0;
			@l = ();
			if (defined $names->{$k}) {
				$fullname = $names->{$k};
			}
		}
		if ($line =~ m/^\s+NEEDED\s+(.*?)\s*$/) {
			my $lib = $1;
			push(@l, $lib);
			# detect linux binaries
			if ($lib eq 'libc.so.6') {
				$linux_binary = 1;
			}
		} elsif ($line =~ m/^\s+RPATH\s+(.*)\s*$/) {
			my $p = {};
			for my $path (split /\:/, $1) {
				next if $path eq '/usr/local/lib';
				next if $path eq '/usr/X11R6/lib';
				next if $path eq '/usr/lib';
				$p->{$path} = 1;
			}
			my $d;
			if ($self->logger) {
				$d = $self->logger->open("$fullname.log");
				print $d "rpath: ";
			}
			for my $path (keys %$p) {
				$self->dest->record_rpath($path, $fullname);
				print $d "$path " if $d;
			}
			print $d "\n" if $d;
		}
	}
	$self->record_libs($fullname, @l) unless $linux_binary;
}

sub scan_binary($self, $item, $fullname, $n)
{
	# okay, so we don't scan now, we keep it for later !
	$self->{names}{$n} = $fullname;
	push(@{$self->{cleanup}}, $item);

	if (@{$self->{cleanup}} >= 1000) {
		$self->finish_scanning;
	}
}

sub finish_scanning($self)
{
	if (defined $self->{names}) {
		my $cmd = $self->start(sort keys %{$self->{names}});
		$self->parse($cmd, $self->{names});
		close($cmd);
		delete $self->{names};
	}
	if (defined $self->{cleanup}) {
		for my $item (@{$self->{cleanup}}) {
			$self->{source}->clean($item);
		}
		delete $self->{cleanup};
	}
}

1;
