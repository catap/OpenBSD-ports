COMMENT =		web application security tool

VERSION =		2.11.1
DISTNAME =		ZAP_${VERSION}_Linux
PKGNAME =		zaproxy-${VERSION}

CATEGORIES =		security

HOMEPAGE =		https://www.owasp.org/index.php/ZAP

# Apache v2.0 License
PERMIT_PACKAGE =	Yes

SITES =	https://github.com/zaproxy/zaproxy/releases/download/v${VERSION}/

MODULES =               java
MODJAVA_VER =           1.8+

RUN_DEPENDS =		java/javaPathHelper

NO_BUILD =		Yes
NO_TEST =		Yes

WRKDIST =		${WRKDIR}/ZAP_${VERSION}

SUBST_VARS +=		VERSION

do-install:
	cp -r ${WRKDIST} ${PREFIX}/share/zaproxy
	${SUBST_PROGRAM} ${FILESDIR}/zaproxy.sh ${PREFIX}/bin/zaproxy

.include <bsd.port.mk>
