COMMENT=		GUI for managing virtual machines through libvirt

DISTNAME=		virt-manager-4.1.0
CATEGORIES=		sysutils x11
REVISION=		5

HOMEPAGE=		http://virt-manager.org/

MAINTAINER=		Antoine Jacoutot <ajacoutot@openbsd.org>

# GPLv2+
PERMIT_PACKAGE=	Yes

SITES=			https://virt-manager.org/download/sources/virt-manager/

MODULES=		devel/dconf \
			lang/python

MODPY_PYTEST=		Yes
MODPY_SETUPTOOLS=	Yes

BUILD_DEPENDS=		devel/gettext,-tools \
			textproc/py-docutils${MODPY_FLAVOR}

RUN_DEPENDS=		devel/libvirt-glib \
			devel/py-gobject3${MODPY_FLAVOR} \
			devel/vte3 \
			misc/osinfo/libosinfo \
			sysutils/libvirt-python${MODPY_FLAVOR} \
			textproc/libxml,-python \
			www/py-requests${MODPY_FLAVOR} \
			x11/gtk-vnc \
			x11/gtksourceview4 \
			x11/spice-gtk

# pygobject GTK3 introspection (not provided by indirect dependencies)
RUN_DEPENDS +=		x11/gtk+3

RUN_DEPENDS +=		devel/desktop-file-utils \
			x11/gtk+4,-guic

MODPY_SETUP_ARGS=	--no-update-icon-cache \
			--no-compile-schemas

pre-configure:
	${SUBST_CMD} ${WRKSRC}/virtinst/buildconfig.py

post-install:
	${MODPY_COMPILEALL} ${PREFIX}/share/virt-manager

.include <bsd.port.mk>
