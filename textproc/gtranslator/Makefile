COMMENT=		gettext(1) files editor for GNOME

GNOME_PROJECT=		gtranslator
GNOME_VERSION=		42.0
REVISION=		0

CATEGORIES=		textproc devel

# GPLv3
PERMIT_PACKAGE=	Yes

WANTLIB += atk-1.0 c cairo gda-6.0 gdk-3 gettextpo gio-2.0 glib-2.0
WANTLIB += gobject-2.0 gspell-1 gtk-3 gtksourceview-4 handy-1
WANTLIB += intl json-glib-1.0 pango-1.0 soup-3.0 xml2

MODULES=		devel/dconf \
			devel/meson \
			x11/gnome

RUN_DEPENDS=		devel/gsettings-desktop-schemas \
			devel/iso-codes

BUILD_DEPENDS=		devel/gsettings-desktop-schemas \
			devel/iso-codes

LIB_DEPENDS=		devel/gettext,-tools \
			devel/json-glib \
			devel/libsoup3 \
			textproc/gspell \
			x11/gtksourceview4 \
			x11/gnome/libgda \
			x11/libhandy

MODGNOME_TOOLS=		desktop-file-utils gtk-update-icon-cache yelp

DEBUG_PACKAGES=		${BUILD_PACKAGES}

.include <bsd.port.arch.mk>
.if !${PROPERTIES:Mclang}
CFLAGS +=	-std=gnu99
.endif

.include <bsd.port.mk>
