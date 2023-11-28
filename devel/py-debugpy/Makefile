COMMENT =	Python implementation of the debug adapter protocol

MODPY_EGG_VERSION=	1.7.0
DISTNAME=	debugpy-${MODPY_EGG_VERSION}
PKGNAME=	py-${DISTNAME}
EXTRACT_SUFX=	.zip

CATEGORIES=	devel

# MIT
PERMIT_PACKAGE=	Yes

MODULES=	lang/python

FLAVORS=	python3
FLAVOR=		python3

MODPY_PI=	Yes
MODPY_PYBUILD=	setuptools

TEST_DEPENDS =	devel/py-trio${MODPY_FLAVOR} \
		devel/py-untangle${MODPY_FLAVOR} \
		math/py-numpy${MODPY_FLAVOR} \
		sysutils/py-psutil${MODPY_FLAVOR} \
		textproc/py-defusedxml${MODPY_FLAVOR}

.include <bsd.port.mk>