# $OpenBSD: modules.port.mk,v 1.17 2023/09/06 09:51:34 espie Exp $
#
#  Copyright (c) 2001 Marc Espie
# 
#  Redistribution and use in source and binary forms, with or without
#  modification, are permitted provided that the following conditions
#  are met:
#  1. Redistributions of source code must retain the above copyright
#     notice, this list of conditions and the following disclaimer.
#  2. Redistributions in binary form must reproduce the above copyright
#     notice, this list of conditions and the following disclaimer in the
#     documentation and/or other materials provided with the distribution.
#
#  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND
#  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
#  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
#  ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE
#  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
#  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
#  OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
#  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
#  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
#  OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
#  SUCH DAMAGE.
# 
# Recursive module support
#

.undef _MODULES_KEEP_GOING

_COMPILER=
.if defined(COMPILER) && !defined(CHOSEN_COMPILER)
.  if defined(_MODULES_DONE) && ${_MODULES_DONE:Mgcc4}
ERRORS += "Fatal: COMPILER coming from a file included *after* the gcc module"
.  endif
COMPILER_LANGS ?= c c++
_COMPILER=compiler
.endif

.if defined(DIST_TUPLE) && empty(MODULES:Mdist-tuple)
MODULES += dist-tuple
.endif

.for _m in ${_COMPILER} ${MODULES:L}
.  if "${_m:M*/*}" != ""
.    for _d in ${PORTSDIR_PATH:S/:/ /g}
.      if empty(_MODULES_DONE:M${_m}) && exists(${_d}/${_m}/${_m:T}.port.mk)
.        include "${_d}/${_m}/${_m:T}.port.mk"
_MODULES_DONE += ${_m}
_MODULES_KEEP_GOING = Yep
.      endif
.    endfor
.  endif
.  if empty(_MODULES_DONE:M${_m})
.    if exists(${PORTSDIR}/infrastructure/mk/${_m}.port.mk)
.      include "${PORTSDIR}/infrastructure/mk/${_m}.port.mk"
_MODULES_DONE += ${_m}
_MODULES_KEEP_GOING = Yep
.    else
ERRORS += "Fatal: Missing support for module ${_m}."
.    endif
.  endif
.endfor


# Tail recursion
.if defined(_MODULES_KEEP_GOING)
.  include "${PORTSDIR}/infrastructure/mk/modules.port.mk"
.endif
