COMMENT =		SVG Tiny implementation

NETSURF_PROJECT =	libsvgtiny
NETSURF_VERSION =	0.1.8

CATEGORIES =		graphics
SHARED_LIBS =		svgtiny 0.0 #0.1.4

BUILD_DEPENDS +=	devel/gperf
LIB_DEPENDS =		www/netsurf/libdom>=0.3.2

WANTLIB += dom expat hubbub iconv m parserutils wapcaplet

.include <bsd.port.mk>
