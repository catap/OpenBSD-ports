COMMENT=	very flexible diff-like program

DISTNAME=	spiff-1.0
REVISION=	1
CATEGORIES=	textproc

SITES=		http://www.darwinsys.com/freeware/

MAINTAINER=	Ian Darwin <ian@openbsd.org>

# custom
PERMIT_PACKAGE=		may not modify
PERMIT_DISTFILES=	Yes
WANTLIB=		c m 

NO_TEST=	Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/spiff ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/spiff.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
