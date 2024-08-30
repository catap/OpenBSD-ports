COMMENT =	Z3 theorem prover

GH_ACCOUNT =	Z3Prover
GH_PROJECT =	z3
GH_TAGNAME =	${GH_PROJECT}-4.13.0

DISTNAME =	${GH_TAGNAME}

SHARED_LIBS =	z3	4.1

CATEGORIES =	math

WANTLIB +=	c m pthread ${COMPILER_LIBCXX}

# MIT
PERMIT_PACKAGE =	Yes

# C++17, clang lead to segfaults
# See: https://github.com/Z3Prover/z3/issues/6902
COMPILER =	ports-gcc

MODULES =	devel/cmake \
		lang/python

MODPY_RUNDEP =	No

CONFIGURE_ARGS =	-DZ3_BUILD_PYTHON_BINDINGS=ON \
			-DZ3_ENABLE_EXAMPLE_TARGETS=ON \
			-DZ3_INCLUDE_GIT_DESCRIBE=OFF \
			-DZ3_INCLUDE_GIT_HASH=OFF \
			-DZ3_USE_LIB_GMP=OFF

DEBUG_PACKAGES = ${BUILD_PACKAGES}

WRKDIST =	${WRKDIR}/z3-${DISTNAME}

pre-configure:
	${SUBST_CMD} ${WRKSRC}/scripts/mk_util.py

post-test:
	@find ${WRKSRC}/examples/SMT-LIB2 \
		-type f -name "*.smt2" \
		-exec ${WRKBUILD}/z3 {} \;

.include <bsd.port.mk>
