COMMENT=		Clearlooks based GTK+ 2.x engine

V=			0.6
DISTNAME=		39179-rezlooks-$V
PKGNAME=		gtk2-rezlooks-engine-$V
REVISION=		8
CATEGORIES=		x11

# GPLv2
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama Xrandr
WANTLIB += Xrender atk-1.0 cairo expat ffi fontconfig freetype fribidi
WANTLIB += gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 graphite2 gthread-2.0 gtk-x11-2.0 harfbuzz iconv
WANTLIB += intl m pango-1.0 pangocairo-1.0 pangoft2-1.0 pcre2-8 pixman-1
WANTLIB += png pthread xcb xcb-render xcb-shm z ${COMPILER_LIBCXX}
WANTLIB += Xau Xdmcp jpeg

THEMES_DISTNAME=rezlooks-themes-0.1

SITES=		http://gnome-look.org/CONTENT/content-files/
SITES.t=	http://distfiles.sigtrap.nl/
DIST_SUBDIR=	rezlooks
DISTFILES.t= 	${THEMES_DISTNAME}${EXTRACT_SUFX}


LIB_DEPENDS =	x11/gtk+2


WRKDIST= 	${WRKDIR}/rezlooks-$V

CONFIGURE_STYLE=gnu
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"

post-install:
	rm ${PREFIX}/lib/gtk-2.0/2.10.0/engines/*.{a,la}
	${INSTALL_DATA_DIR} ${PREFIX}/share/themes/
	cp -R ${WRKDIR}/${THEMES_DISTNAME}/* ${PREFIX}/share/themes/
	@chown -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/share/themes/*


.include <bsd.port.mk>
