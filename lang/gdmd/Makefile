COMMENT =	dmd-like wrapper for gdc
DISTNAME =	${GH_PROJECT}-0.1.0
PKGNAME =	${DISTNAME}pl20210818
CATEGORIES =	lang

# can't be built by default, because gcc-11 hangs
UNLINKED =	gdmd

GH_ACCOUNT =	D-Programming-GDC
GH_PROJECT =	gdmd
GH_COMMIT =	ff2c97a47408fb71c18a2d453294d18808a97cc5

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

RUN_DEPENDS =	lang/gcc/11,-dlang

USE_GMAKE =	Yes

NO_TEST =	Yes

.include <bsd.port.mk>
