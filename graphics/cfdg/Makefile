COMMENT =	Context Free Design Grammar

VERSION =	3.4
DISTNAME =	ContextFreeSource${VERSION}
PKGNAME =	cfdg-${VERSION}

WRKDIST =	${WRKDIR}/context-free${VERSION}

CATEGORIES =	graphics

HOMEPAGE =	https://www.contextfreeart.org/

# GPLv2+
PERMIT_PACKAGE =	Yes

SITES =		https://www.contextfreeart.org/download/
EXTRACT_SUFX =	.tgz

WANTLIB += ${COMPILER_LIBCXX} c icudata icui18n icuuc m png

BUILD_DEPENDS =	devel/bison

LIB_DEPENDS =	graphics/png \
		textproc/icu4c

COMPILER =	base-clang ports-gcc

USE_GMAKE =	Yes

MAKE_ENV +=	CPPFLAGS="${CFLAGS}"
MAKE_FLAGS =	CXX="${CXX}" CC="${CXX}" COMPILER_LIBCXX="${LIBCXX}"

EXAMPLEDIR =	${PREFIX}/share/examples/cfdg

DEBUG_PACKAGES =	${BUILD_PACKAGES}

# Work-around bad installation of FlexLexer.h
post-extract:
	test -f /usr/include/FlexLexer.h || \
		cp /usr/include/g++/FlexLexer.h ${WRKSRC}/src-unix/

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/cfdg ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${EXAMPLEDIR}/input
	${INSTALL_DATA} ${WRKSRC}/README ${EXAMPLEDIR}
	${INSTALL_DATA} ${WRKSRC}/input/*.cfdg ${EXAMPLEDIR}/input

.include <bsd.port.mk>
