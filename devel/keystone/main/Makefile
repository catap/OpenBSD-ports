BROKEN-riscv64 =	llvm-build: error: invalid native target: 'RISCV' (not in project)

COMMENT =	multi-platform, multi-architecture assembler framework

REVISION =	1

SHARED_LIBS =	keystone	1.0

WANTLIB +=	c m
WANTLIB += ${COMPILER_LIBCXX}

MODULES =	devel/cmake \
		lang/python
MODPY_RUNDEP =	No

# atomics
COMPILER =	base-clang ports-clang

CONFIGURE_ARGS = -DBUILD_SHARED_LIBS=ON

NO_TEST =	Yes

.include <bsd.port.mk>
