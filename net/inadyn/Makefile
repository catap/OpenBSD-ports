COMMENT =		small memory footprint dynamic dns updater

DISTNAME =		inadyn-1.98.0
REVISION =		2

CATEGORIES =		net

HOMEPAGE =		http://vmlinux.org/jocke/inadyn.shtml

MAINTAINER =		Pierre-Emmanuel Andre <pea@openbsd.org>

# GPLv2
PERMIT_PACKAGE =	Yes

WANTLIB =		c

SITES =			ftp://ftp.vmlinux.org/pub/People/jocke/inadyn/
EXTRACT_SUFX =		.tar.bz2

MAKE_FLAGS =		EXTRA_CFLAGS="${CFLAGS}"

USE_GMAKE = 		Yes
NO_TEST = 		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/inadyn/
	${INSTALL_DATA} ${FILESDIR}/inadyn.conf ${PREFIX}/share/examples/inadyn/

.include <bsd.port.mk>
