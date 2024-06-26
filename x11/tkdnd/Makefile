COMMENT =	drag n drop extension for Tk

REVISION =	4
DISTNAME =	tkdnd-1.0a2
CATEGORIES =	x11

HOMEPAGE = 	https://tkdnd.sourceforge.net/

MAINTAINER =	Sebastian Reitenbach <sebastia@openbsd.org>

# BSD
PERMIT_PACKAGE =		Yes

SITES =			${SITE_SOURCEFORGE:=tkdnd/}

MODULES =		x11/tk
BUILD_DEPENDS =		${MODTK_BUILD_DEPENDS}
RUN_DEPENDS =		${MODTK_RUN_DEPENDS}

WANTLIB =		X11 Xext Xft Xss fontconfig m

USE_GMAKE =		yes
WRKSRC =		${WRKDIR}/${DISTNAME}/unix
CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	 --libdir=${MODTCL_TCLDIR} \
			--with-tclinclude=${MODTCL_INCDIR} \
			--with-tcl=${MODTCL_LIBDIR} \
			--with-tk=${MODTK_LIBDIR} \
			--datadir=${PREFIX}/share/examples \
			--prefix=${WRKINST}
CONFIGURE_ENV =		CFLAGS=-I${X11BASE}/include \
			DESTDIR=${DESTDIR}
MAKE_ENV = 		MODTK_INCDIR=${MODTK_INCDIR}
TEST_TARGET =		tests
TEST_IS_INTERACTIVE = 	X11
SUBST_VARS =			DESTDIR

pre-configure:
	${SUBST_CMD} ${WRKSRC}/mkIndex.tcl.in
	${MODTCL_TCLSH_ADJ} ${WRKSRC}/../demo/dnddemo.tcl ${WRKSRC}/../demo/newtest.tcl

do-install:
	${INSTALL_PROGRAM_DIR} ${DESTDIR}${MODTCL_TCLDIR}/tkdnd
	cd ${WRKBUILD}/../lib/tkdnd && \
	${INSTALL_DATA} pkgIndex.tcl ${DESTDIR}${MODTCL_TCLDIR}/tkdnd
	cd ${WRKBUILD}/../lib/tkdnd && \
	${INSTALL_DATA} tkDND_Utils.tcl ${DESTDIR}${MODTCL_TCLDIR}/tkdnd
	cd ${WRKBUILD}/../lib/tkdnd && \
	${INSTALL_DATA} libtkdnd.so ${DESTDIR}${MODTCL_TCLDIR}/tkdnd 
	${INSTALL_DATA_DIR} ${PREFIX}/man/mann
	cd ${WRKBUILD}/../doc && \
	${INSTALL_MAN} tkDND.n ${PREFIX}/man/mann


.include <bsd.port.mk>
