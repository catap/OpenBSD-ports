COMMENT=	flexible forms validation and rendering library

MODPY_EGG_VERSION=3.0.1
DISTNAME=	WTForms-${MODPY_EGG_VERSION}
PKGNAME=	py-${DISTNAME:L}
CATEGORIES=	www
REVISION=	2

HOMEPAGE=	https://wtforms.readthedocs.io/

# BSD
PERMIT_PACKAGE=	Yes

MODULES=	lang/python

MODPY_PI=	Yes

FLAVORS=	python3
FLAVOR=		python3

BUILD_DEPENDS=	devel/py-babel${MODPY_FLAVOR}
RUN_DEPENDS=	devel/py-dateutil${MODPY_FLAVOR}

MODPY_PYBUILD=	setuptools
USE_GMAKE=	Yes

.include <bsd.port.mk>
