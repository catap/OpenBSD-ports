COMMENT=	Twitter, Identica, and Status.net plugin for libpurple

VERSION=	0.3.0
DISTNAME=	mbpurple-${VERSION}
PKGNAME=	microblog-purple-${VERSION}
REVISION=	8
CATEGORIES=	net

HOMEPAGE=	https://microblog-purple.googlecode.com/
MAINTAINER=	Sebastian Reitenbach <sebastia@openbsd.org>

# GPLv3
PERMIT_PACKAGE=	Yes

WANTLIB =  GL X11 Xau Xcomposite Xcursor Xdamage Xdmcp Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender Xxf86vm atk-1.0 cairo drm expat
WANTLIB += fontconfig freetype gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0
WANTLIB += glib-2.0 gmodule-2.0 gobject-2.0 gthread-2.0 gtk-x11-2.0
WANTLIB += harfbuzz iconv intl m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pixman-1 png pthread purple xcb xcb-render xcb-shm z

SITES=		${HOMEPAGE}/files/

FIX_CRLF_FILES=	Makefile \
		microblog/identica.c

MODULES=	textproc/intltool


BUILD_DEPENDS=	net/pidgin
LIB_DEPENDS=	net/pidgin,-libpurple \
		x11/gtk+2

USE_GMAKE=	Yes
ALL_TARGET=	build
MAKE_ENV=	MAKE_PROGRAM=${MAKE_PROGRAM}
NO_TEST=	Yes

pre-configure:
	${SUBST_CMD} ${WRKSRC}/global.mak

.include <bsd.port.mk>
