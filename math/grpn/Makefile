COMMENT=	graphical reverse polish notation calculator

DISTNAME=	grpn-1.1.2
REVISION=	10
CATEGORIES=	math x11

HOMEPAGE=	http://lashwhip.com/grpn.html

SITES=		http://lashwhip.com/grpn/ \
		ftp://lashwhip.com/pub/

# GPLv2
PERMIT_PACKAGE=	Yes

WANTLIB =  X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama Xrandr
WANTLIB += Xrender atk-1.0 c cairo fontconfig freetype gdk-x11-2.0
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0 gtk-x11-2.0
WANTLIB += harfbuzz iconv intl m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pthread z

LIB_DEPENDS=	x11/gtk+2

MAKE_FLAGS=	CC="${CC}"
ALL_TARGET=
NO_TEST=	Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/grpn ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/grpn.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
