COMMENT =	terminal browser for gopher, gemini, and finger

MODGO_MODNAME =	tildegit.org/sloum/bombadillo
MODGO_VERSION =	v0.0.0-20220306215042-30e550c183b1

DISTNAME =	bombadillo-${MODGO_VERSION}
PKGNAME =	bombadillo-2.4.0

CATEGORIES =	net

HOMEPAGE =	https://bombadillo.colorfield.space/

# GPLv3
PERMIT_PACKAGE =	yes

WANTLIB += c pthread

MODULES =		lang/go

post-install:
	${INSTALL_MAN} ${WRKSRC}/bombadillo.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
