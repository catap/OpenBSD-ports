COMMENT=		MATE power manager

REVISION=		0

MATE_PROJECT=		mate-power-manager
MATE_VERSION=		1.28.1

# LGPLv2
PERMIT_PACKAGE=	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 atk-bridge-2.0 c cairo cairo-gobject
WANTLIB += canberra canberra-gtk3 dbus-1 dbus-glib-1 epoxy execinfo
WANTLIB += expat ffi fontconfig freetype fribidi gcrypt gdk-3
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 gpg-error graphite2 gthread-2.0 gtk-3 harfbuzz
WANTLIB += iconv intl ltdl m mate-panel-applet-4 notify ogg pango-1.0
WANTLIB += pangocairo-1.0 pangoft2-1.0 pcre2-8 pixman-1 png pthread
WANTLIB += upower-glib vorbis vorbisfile xcb xcb-render xcb-shm z
WANTLIB += ${COMPILER_LIBCXX} jpeg secret-1 Xau Xdmcp
WANTLIB += X11-xcb atspi dconf epoll-shim mate-desktop-2 startup-notification-1
WANTLIB += wayland-client wayland-cursor wayland-egl xcb-util
WANTLIB += xkbcommon

MODULES=		devel/dconf \
			x11/gnome

MODGNOME_TOOLS=		desktop-file-utils gtk-update-icon-cache yelp

CONFIGURE_STYLE=	gnu

MODGNOME_LDFLAGS=	-lexecinfo

LIB_DEPENDS=		sysutils/upower \
			x11/gnome/libsecret \
			x11/mate/panel

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/${MATE_PROJECT}
	@mv ${WRKINST}/etc/xdg \
		${PREFIX}/share/examples/${MATE_PROJECT}/xdg

.include <bsd.port.mk>
