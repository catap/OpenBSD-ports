COMMENT =	personal dictionary manager for anthy

DISTNAME =	kasumi-2.5
REVISION =	11

CATEGORIES =	japanese

HOMEPAGE =	https://osdn.jp/projects/kasumi/

# GPLv2
PERMIT_PACKAGE =	Yes

SITES =		${SITE_OSDN_JP:=kasumi/41436/}

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender anthy anthydic atk-1.0 c cairo fontconfig
WANTLIB += freetype gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gobject-2.0 gtk-x11-2.0 iconv intl m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pthread ${COMPILER_LIBCXX} z harfbuzz

COMPILER =		base-clang ports-gcc base-gcc
CXXFLAGS_base-clang =	-std=c++14

BUILD_DEPENDS =	devel/gettext,-tools
RUN_DEPENDS =	devel/desktop-file-utils
LIB_DEPENDS =	devel/gettext,-runtime \
		inputmethods/anthy \
		x11/gtk+2

CONFIGURE_STYLE =	gnu

.include <bsd.port.mk>
