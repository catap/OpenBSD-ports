COMMENT=	Xfce4 disk performance panel plugin

XFCE_VERSION=	2.7.0
XFCE_PLUGIN=	diskperf
REVISION=	2

# BSD
PERMIT_PACKAGE=	Yes

MODULES=	x11/xfce4

WANTLIB += ICE SM X11 X11-xcb Xau Xcomposite Xcursor Xdamage Xdmcp Xext Xfixes Xi
WANTLIB += Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0 atspi
WANTLIB += cairo cairo-gobject dbus-1 epoxy execinfo expat ffi fontconfig
WANTLIB += freetype fribidi gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 gobject-2.0 graphite2 gtk-3 harfbuzz
WANTLIB += iconv intl jpeg m pango-1.0 pangocairo-1.0 pangoft2-1.0 pcre2-8
WANTLIB += pixman-1 png pthread startup-notification-1 xcb xcb-render
WANTLIB += xcb-shm xcb-util xfce4ui-2 xfce4util z
WANTLIB += ${COMPILER_LIBCXX}

.include <bsd.port.mk>
