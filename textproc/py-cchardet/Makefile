COMMENT=		high speed universal character encoding detector

MODPY_EGG_VERSION=	2.1.7
DISTNAME=		cchardet-${MODPY_EGG_VERSION}
PKGNAME=		py-${DISTNAME}
REVISION=		3

CATEGORIES=		textproc

HOMEPAGE=		https://github.com/PyYoshi/cChardet

# MPL 1.1
PERMIT_PACKAGE=		Yes

WANTLIB += ${COMPILER_LIBCXX} m

MODULES=		lang/python

MODPY_PI=		Yes
MODPY_PYBUILD=		setuptools

FLAVORS=		python3
FLAVOR=			python3

BUILD_DEPENDS=		lang/cython${MODPY_FLAVOR}

.include <bsd.port.mk>
