COMMENT =		Commodore tape image cleaning utility
DISTNAME =		tapclean-20130522
CATEGORIES =		misc
REVISION =		0

HOMEPAGE =		https://sourceforge.net/projects/tapclean/
MAINTAINER =		Edd Barrett <edd@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c m

# the software authors do not make source release tarballs
SITES =			http://theunixzoo.co.uk/distfiles/

NO_TEST =		Yes

WRKDIST =		${WRKDIR}/tapclean
WRKBUILD =		${WRKDIST}/src

USE_GMAKE =		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/tapclean ${PREFIX}/bin

.include <bsd.port.mk>
