COMMENT =	substantially more useful ls
DISTNAME =	sl-ls-1.1.2
REVISION =	1
CATEGORIES =	productivity sysutils

HOMEPAGE =	http://practicalthought.com/sl/

# GPLv3
PERMIT_PACKAGE =		Yes

SITES =		http://mirrors.nycbug.org/pub/distfiles/

MODULES +=	lang/tcl

RUN_DEPENDS =	${MODTCL_RUN_DEPENDS}

NO_BUILD =	Yes
NO_TEST =	Yes

pre-configure:
	${MODTCL_TCLSH_ADJ} ${WRKSRC}/sl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/sl ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/sl
	${INSTALL_DATA} ${WRKSRC}/sl.tcl ${PREFIX}/share/examples/sl

.include <bsd.port.mk>
