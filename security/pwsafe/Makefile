COMMENT=		program that manages encrypted password databases
DISTNAME=		pwsafe-0.2.0
REVISION =		7
CATEGORIES=		security

HOMEPAGE=		http://nsd.dyndns.org/pwsafe/

# GPLv2+
PERMIT_PACKAGE=	Yes

WANTLIB=		m ncurses crypto c ${COMPILER_LIBCXX} readline curses

COMPILER =		base-clang ports-gcc base-gcc

SITES=			${HOMEPAGE}releases/

CONFIGURE_STYLE=        gnu
USE_GMAKE=		Yes

FLAVORS=		no_x11
FLAVOR?=

.if ${FLAVOR:Mno_x11}
CONFIGURE_ARGS+=	--without-x
.else
WANTLIB+=		Xmu X11 SM ICE
.endif

.include <bsd.port.mk>
