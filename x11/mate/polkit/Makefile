COMMENT=		PolicyKit authentication agent for MATE

REVISION=		0

MATE_PROJECT=		mate-polkit
MATE_VERSION=		1.28.1

CATEGORIES=		x11 sysutils

# LGPLv2
PERMIT_PACKAGE=	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama Xrandr
WANTLIB += Xrender atk-1.0 atk-bridge-2.0 c cairo cairo-gobject epoxy
WANTLIB += expat ffi fontconfig freetype fribidi gdk-3 gdk_pixbuf-2.0
WANTLIB += gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 graphite2
WANTLIB += gtk-3 harfbuzz iconv intl m pango-1.0
WANTLIB += pangocairo-1.0 pangoft2-1.0 pcre2-8 pixman-1 png polkit-agent-1
WANTLIB += polkit-gobject-1 pthread xcb xcb-render xcb-shm z
WANTLIB += ${COMPILER_LIBCXX} execinfo jpeg Xau Xdmcp
WANTLIB += atspi dbus-1 epoll-shim wayland-client wayland-cursor
WANTLIB += wayland-egl xkbcommon

MODULES=		x11/gnome

LIB_DEPENDS=		sysutils/polkit \
			x11/gtk+3

CONFIGURE_STYLE=	gnu

CONFIGURE_ARGS=		--disable-accountsservice \
			--disable-appindicator

FAKE_FLAGS=		sysconfdir=${PREFIX}/share/examples/mate-polkit

.include <bsd.port.mk>
