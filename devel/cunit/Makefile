COMMENT =		c unit testing framework

VER =			2.1-2
DISTNAME =		CUnit-${VER}
PKGNAME =		cunit-${VER:S/-/./}
REVISION =		3

SHARED_LIBS =		cunit	1.0

CATEGORIES =		devel

HOMEPAGE =		https://cunit.sourceforge.net/

# LGPL
PERMIT_PACKAGE =	Yes

WANTLIB += curses

SITES =			${SITE_SOURCEFORGE:=cunit/}
EXTRACT_SUFX =		-src.tar.bz2

FAKE_FLAGS +=		docdir=${PREFIX}/share/doc/CUnit/ \
			dochdrdir=${PREFIX}/share/doc/CUnit/headers/

CONFIGURE_STYLE =	autoconf
CONFIGURE_ENV =		LDFLAGS="-lncurses"
CONFIGURE_ARGS +=	--enable-curses
AUTOCONF_VERSION =	2.67

.include <bsd.port.mk>
