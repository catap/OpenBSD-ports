COMMENT = 	simple metronome
CATEGORIES =	audio
DISTNAME = 	metronome-2
MAINTAINER = 	Marc Espie <espie@openbsd.org>
SITES = 	https://distfiles.sigtrap.nl/

# OpenBSD licence
PERMIT_PACKAGE =	Yes

FAKE_FLAGS = 	BINDIR=${TRUEPREFIX}/bin MANDIR=${TRUEPREFIX}/man/man
WANTLIB += 	c m sndio

NO_TEST =	Yes

.include <bsd.port.mk>
