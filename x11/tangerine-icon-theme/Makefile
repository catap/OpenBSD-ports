COMMENT=		Tangerine icon theme from Ubuntu

V=			0.27
DISTNAME=		tangerine-icon-theme_${V}
PKGNAME=		${DISTNAME:S/_/-/}
CATEGORIES=		x11
REVISION=		2

SITES=	http://archive.ubuntu.com/ubuntu/pool/main/t/tangerine-icon-theme/

# Creative Commons Attribution-ShareAlike 2.5
PERMIT_PACKAGE=	Yes

MODULES=		textproc/intltool

WRKDIST=		${WRKDIR}/tangerine-icon-theme-0.27

RUN_DEPENDS=		x11/gtk+4,-guic

BUILD_DEPENDS=		devel/gettext,-runtime \
			misc/findutils \
			x11/icon-naming-utils

ALL_TARGET=		build
NO_TEST=		Yes
PKG_ARCH=		*

pre-configure:
	${SUBST_CMD} ${WRKSRC}/Makefile

.include <bsd.port.mk>
