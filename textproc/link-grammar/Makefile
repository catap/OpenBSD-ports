ONLY_FOR_ARCHS-java =	i386 amd64
ONLY_FOR_ARCHS =	${CLANG_ARCHS} ${LLVM_ARCHS}

COMMENT-main =		syntactic parser of different languages
COMMENT-java =		Java bindings for link-grammar
COMMENT-python =	Python bindings for link-grammar

VERSION =		5.12.0
DISTNAME =		link-grammar-${VERSION}

PKGNAME-main =		${DISTNAME}
PKGNAME-java =		link-grammar-java-${VERSION}
PKGNAME-python =	py3-link-grammar-${VERSION}
REVISION-java =		0
REVISION-main =		0
REVISION-python =	0

SHARED_LIBS +=  link-grammar         10.0      # 15.2
SHARED_LIBS +=  link-grammar-java    8.0       # 15.2

CATEGORIES =		textproc

HOMEPAGE =		https://www.abisource.com/projects/link-grammar/

# LGPLv2.1
PERMIT_PACKAGE =	Yes

WANTLIB += curses hunspell-1.7 m pcre2-8 sqlite3 z ${COMPILER_LIBCXX}

WANTLIB-main += ${WANTLIB} c perl pthread

WANTLIB-java += ${WANTLIB} link-grammar pthread

WANTLIB-python += ${WANTLIB} ${MODPY_WANTLIB}
WANTLIB-python += iconv intl link-grammar pthread util

# XXX no https: TLS handshake failure: certificate verification failed: certificate has expired
SITES =		http://www.abisource.com/downloads/link-grammar/${VERSION}/

MODULES =		lang/python

MODPY_ADJ_FILES =	bindings/python-examples/tests.py

USE_GMAKE =		Yes

# -std=c++03 -std=c11
COMPILER =		base-clang ports-gcc

MULTI_PACKAGES =	-main -java -python
PSEUDO_FLAVORS =	no_java

.include <bsd.port.arch.mk>

BUILD_DEPENDS =		devel/swig

LIB_DEPENDS=		databases/sqlite3

LIB_DEPENDS-main =	${LIB_DEPENDS} \
			devel/pcre2 \
			textproc/hunspell

LIB_DEPENDS-java =	${BUILD_PKGPATH},-main

LIB_DEPENDS-python =	${MODPY_LIB_DEPENDS} \
			${BUILD_PKGPATH},-main

RUN_DEPENDS-main =	# empty
RUN_DEPENDS-java =	${MODJAVA_RUN_DEPENDS}
RUN_DEPENDS-python =	${MODPY_RUN_DEPENDS}

TEST_DEPENDS =		${BUILD_PKGPATH},-python

SUBST_VARS =		VERSION

CONFIGURE_STYLE =	gnu

ADD_CFLAGS =		-I${JAVA_HOME}/include -I${JAVA_HOME}/include/openbsd
ADD_CFLAGS +=		-I${LOCALBASE}/include
CONFIGURE_ENV =		CFLAGS="${CFLAGS} ${ADD_CFLAGS}" \
			CPPFLAGS="${CPPFLAGS} ${ADD_CFLAGS}" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib" \
			JAVA_HOME=${JAVA_HOME}

# don't pick-up maven; it would try to install stuff under /nonexistent/.m2/
CONFIGURE_ENV +=	ac_cv_prog_MVNfound=

CONFIGURE_ARGS =	--enable-perl-bindings \
			--enable-python-bindings \
			--with-hunspell-dictdir=${LOCALBASE}/share/mozilla-dicts

.if ${BUILD_PACKAGES:M-java}
MODULES +=		java
# sync with devel/apache-ant
MODJAVA_VER=		1.8+
BUILD_DEPENDS +=	devel/apache-ant
.else
CONFIGURE_ARGS +=	--disable-java-bindings
.endif

pre-configure:
	sed -i -e 's,-O2,,g;' -e 's,-O3,,g' ${WRKSRC}/configure

post-install:
	rm ${PREFIX}/libdata/perl5/site_perl/${MACHINE_ARCH}-openbsd/clinkgrammar.{a,la}
	rm ${WRKINST}${MODPY_SITEPKG}/linkgrammar/_clinkgrammar.{a,la}

.include <bsd.port.mk>
