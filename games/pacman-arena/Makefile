COMMENT=	pacman clone gone mad

DISTNAME=	pacman-arena-0.15
REVISION=	1

EXTRACT_SUFX=	.tar.bz2
DISTDATA=	pacman-data-0.0.zip
ONLY_EXTRACT=	${DISTNAME}${EXTRACT_SUFX}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} \
		${DISTDATA}

WRKDIST=	${WRKDIR}/pacman

CATEGORIES=	games

HOMEPAGE=	https://pacmanarena.sourceforge.net/

# GPLv2
PERMIT_PACKAGE=	Yes

WANTLIB += GL GLU SDL SDL_mixer SDL_net c m pthread

SITES=		${SITE_SOURCEFORGE:=pacmanarena/}

BUILD_DEPENDS=	archivers/unzip

LIB_DEPENDS=	devel/sdl-mixer \
		devel/sdl-net

NO_TEST=	Yes

CONFIGURE_STYLE=gnu
CONFIGURE_ENV=LDFLAGS='${LDFLAGS} -lm'

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/pacman
	${INSTALL_PROGRAM} ${WRKBUILD}/pacman ${PREFIX}/bin/pacman-arena
	${LOCALBASE}/bin/unzip ${FULLDISTDIR}/${DISTDATA} \
		-d ${PREFIX}/share/pacman

.include <bsd.port.mk>
