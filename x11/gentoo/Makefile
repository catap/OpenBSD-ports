COMMENT=		GTK+3 graphical filemanager

DISTNAME=		gentoo-0.20.7

CATEGORIES=		x11

HOMEPAGE=		http://www.obsession.se/gentoo/

SITES=			${SITE_SOURCEFORGE:=gentoo/}

# GPLv2
PERMIT_PACKAGE=	Yes

WANTLIB += atk-1.0 c cairo cairo-gobject gdk-3 gdk_pixbuf-2.0
WANTLIB += gio-2.0 glib-2.0 gobject-2.0 gthread-2.0 gtk-3 harfbuzz
WANTLIB += intl m pango-1.0 pangocairo-1.0 pthread

LIB_DEPENDS=		x11/gtk+3

CONFIGURE_STYLE=	gnu
NO_TEST=		Yes

pre-configure:
	${SUBST_CMD} ${WRKSRC}/src/buttons.c

pre-install:
	@chmod +x ${WRKSRC}/install-sh

post-install:
	${INSTALL_MAN} ${WRKSRC}/docs/gentoo.1x ${PREFIX}/man/man1/gentoo.1
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/gentoo
.for i in gentoorc gentoogtkrc
	${INSTALL_DATA} ${WRKSRC}/$i ${PREFIX}/share/examples/gentoo
.endfor
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/gentoo
	@cd ${WRKSRC}/docs && pax -rw . ${PREFIX}/share/doc/gentoo
	rm -f ${PREFIX}/share/doc/gentoo/gentoo.1x

.include <bsd.port.mk>
