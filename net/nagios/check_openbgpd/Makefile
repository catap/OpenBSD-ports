PKG_ARCH=		*

COMMENT=		Nagios plugin to monitor OpenBGPd peers
DISTNAME=		check_openbgpd-1.11
CATEGORIES=		sysutils net

MAINTAINER=		Andrew Hewus Fresh <afresh1@openbsd.org>

HOMEPAGE=		http://openbsd.somedomain.net/nagios/
SITES=			${HOMEPAGE}

# BSD
PERMIT_PACKAGE=	Yes

NO_BUILD=		Yes
NO_TEST=		Yes

RUN_DEPENDS+=		net/monitoring-plugins

do-configure:
	@${SUBST_CMD} ${WRKSRC}/check_openbgpd ${WRKSRC}/README

do-install:
	${INSTALL_SCRIPT_DIR} ${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_openbgpd ${PREFIX}/libexec/nagios
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/check_openbgpd
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/check_openbgpd

.include <bsd.port.mk>
