COMMENT=	automatic text creation from templates
CATEGORIES=	devel

V=		5.8.7
DISTNAME=	autogen-${V}
REVISION=	8

SHARED_LIBS +=	opts                 27.5     # .27.5
SHARED_LIBS +=	guileopts            1.0      # .0.1

HOMEPAGE=	https://autogen.sourceforge.net/
SITES=		${SITE_GNU:=autogen/rel${V}/}

# GPLv2
PERMIT_PACKAGE=	Yes

WANTLIB += c gmp guile iconv intl ltdl lzma m pthread xml2 z

LIB_DEPENDS=	devel/gettext,-runtime \
		lang/guile \
		textproc/libxml
CONFIGURE_STYLE=gnu

CONFIGURE_ARGS=	--without-libregex \
		--includedir=${PREFIX}/include/autogen

MAKE_FLAGS+=	INFO_DEPS=

.include <bsd.port.mk>
