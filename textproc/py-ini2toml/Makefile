COMMENT=	convert .ini/.cfg files to TOML equivalents

MODPY_EGG_VERSION=	0.15
DISTNAME=	ini2toml-${MODPY_EGG_VERSION}
PKGNAME=	py-${DISTNAME}

CATEGORIES=	textproc

HOMEPAGE=	https://github.com/abravalheri/ini2toml/

# MIT
PERMIT_PACKAGE=	Yes

MODULES=	lang/python

MODPY_PI=	Yes
MODPY_PYBUILD=	setuptools_scm

# tests need validate-pyproject (not ported) and others
NO_TEST=	Yes

RUN_DEPENDS=	sysutils/py-packaging${MODPY_FLAVOR}

FLAVORS=	python3
FLAVOR=		python3

.include <bsd.port.mk>
