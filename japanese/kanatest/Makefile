COMMENT =	beginner's drill tool to learn Japanese kana characters

DISTNAME =	kanatest-0.4.6
REVISION =	13

CATEGORIES =	japanese

# GPL
PERMIT_PACKAGE =	Yes

WANTLIB =  X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama Xrandr
WANTLIB += Xrender atk-1.0 c cairo fontconfig freetype gdk-x11-2.0
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0 gtk-x11-2.0
WANTLIB += harfbuzz iconv intl lzma m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pthread xml2 z

SITES =		${HOMEPAGE}

BUILD_DEPENDS =	devel/gettext,-tools
RUN_DEPENDS =	devel/desktop-file-utils
LIB_DEPENDS =	devel/gettext,-runtime \
		x11/gtk+2 \
		textproc/libxml

CONFIGURE_STYLE = gnu
CONFIGURE_ENV =	CPPFLAGS="-I${LOCALBASE}/include" \
                LDFLAGS="-L${LOCALBASE}/lib"

NO_TEST =	Yes

.include <bsd.port.mk>
