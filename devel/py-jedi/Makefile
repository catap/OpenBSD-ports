COMMENT =		autocompletion tool for Python

MODPY_EGG_VERSION =	0.19.1
DISTNAME =		jedi-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}
REVISION =		0

CATEGORIES =		devel

HOMEPAGE =		http://jedi.readthedocs.io

MAINTAINER =		Daniel Dickman <daniel@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes

MODULES =		lang/python

FLAVORS =		python3
FLAVOR =		python3

MODPY_PI =		Yes
MODPY_PYBUILD =		setuptools

RUN_DEPENDS =		devel/py-parso${MODPY_FLAVOR}>=0.8.3,<0.9.0

TEST_DEPENDS =		devel/py-docopt${MODPY_FLAVOR} \
			devel/py-colorama${MODPY_FLAVOR}

# some tests need HOME to be writable
PORTHOME =		/tmp

.include <bsd.port.mk>
