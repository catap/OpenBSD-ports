COMMENT=		tiny program emulating the detach feature of screen
DISTNAME=		dtach-0.9
CATEGORIES=		misc
REVISION=		0

HOMEPAGE=		https://dtach.sourceforge.net/

# GPL
PERMIT_PACKAGE=	Yes

WANTLIB=		c util

SITES=			${SITE_SOURCEFORGE:=dtach/}
CONFIGURE_STYLE=	gnu
NO_TEST=		Yes

ALL_TARGET=		dtach

do-install:
	${INSTALL_PROGRAM}  ${WRKSRC}/dtach ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/dtach.1 ${PREFIX}/man/man1/dtach.1

.include <bsd.port.mk>
