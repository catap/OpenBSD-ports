COMMENT=	convert Excel and PowerPoint to HTML

V=		0.2.9.8
DISTNAME=	xlHtml-${V}
PKGNAME=	xlhtml-${V}
REVISION=	5
SHARED_LIBS +=	cole                 2.1      # .2.1
CATEGORIES=	converters

SITES=		http://gd.tuwien.ac.at/utils/format-conv/xlHtml/
HOMEPAGE=	https://chicago.sourceforge.net/xlhtml/

PERMIT_PACKAGE=	Yes

WANTLIB=		c

CONFIGURE_STYLE= gnu
CONFIGURE_ARGS= --enable-static

.include <bsd.port.mk>
