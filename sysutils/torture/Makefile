COMMENT =		set of kernel torture tools

DISTNAME =		torture-1.1
REVISION =		2
CATEGORIES =		sysutils

MAINTAINER =		Bob Beck <beck@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

SITES =		http://foad2.obtuse.com/pub/beck/

NO_TEST =	Yes
WANTLIB =	c

MAKE_FLAGS =	CC="${CC}" BINDIR="${TRUEPREFIX}/sbin" \
		MANDIR="${TRUEPREFIX}/man/man"

.include <bsd.port.mk>
