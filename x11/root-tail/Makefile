COMMENT=	tails a given file anywhere on your X11 root window

DISTNAME=	root-tail-1.2
REVISION=	2
CATEGORIES=	x11

HOMESITE=	http://www.goof.com/pcg/marc
HOMEPAGE=	${HOMESITE}/root-tail.html

# GPL
PERMIT_PACKAGE=	Yes

WANTLIB += X11 Xau Xdmcp Xext c

SITES=			${HOMESITE}/data/

CONFIGURE_STYLE=	imake
NO_TEST=		Yes

.include <bsd.port.mk>
