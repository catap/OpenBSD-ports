COMMENT=	fast tool to backup video DVDs 'on the fly'

DISTNAME=	streamdvd-0.4
REVISION =	6
CATEGORIES=	multimedia
SITES=		http://www.badabum.de/down/

HOMEPAGE=	http://www.badabum.de/streamdvd.html

# GPL
PERMIT_PACKAGE=	Yes

NO_TEST=	Yes

LIB_DEPENDS=	devel/libdvdread>=4.2.0
WANTLIB=	c m ${COMPILER_LIBCXX} dvdread

COMPILER =		base-clang ports-gcc base-gcc
CXXFLAGS_base-clang =	-std=c++14

WRKDIST=	${WRKDIR}/StreamDVD-0.4

ALL_TARGET=all addon

MAKE_ENV+= CC=${CC} CXX=${CXX} CXXFLAGS="${CXXFLAGS}"

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/streamdvd ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/streamanalyze ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/streamdvd
	${INSTALL_DATA} ${WRKSRC}/README \
	    ${PREFIX}/share/doc/streamdvd/README.streamdvd
	${INSTALL_DATA} ${WRKSRC}/contrib/StreamAnalyze/README \
	    ${PREFIX}/share/doc/streamdvd/README.streamanalyze

.include <bsd.port.mk>
