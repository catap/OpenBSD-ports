COMMENT=	monitors the status of mirrors

DISTNAME=	mirmon-2.11
REVISION=	1

CATEGORIES=	net
HOMEPAGE=	http://people.cs.uu.nl/henkp/mirmon/

# free license, see LICENSE
PERMIT_PACKAGE=	Yes

SITES=		${HOMEPAGE}

MODULES=	perl
ICONDIR=	${PREFIX}/share/examples/mirmon/icons

RUN_DEPENDS=	net/rsync net/wget
NO_TEST=	Yes
PKG_ARCH=	*

do-build:
	perl -pi -e 's,/usr/bin/(rsync|wget),${LOCALBASE}/bin/\1,' \
	    ${WRKSRC}/[Mm]irmon* ${WRKSRC}/probe
	perl -pi -e 's,/etc/mirmon.conf,${SYSCONFDIR}/mirmon.conf,' \
	    ${WRKSRC}/[Mm]irmon*
	${SUBST_CMD} -m 444 -c ${FILESDIR}/mirmon.conf ${WRKSRC}/mirmon.conf
	touch ${WRKSRC}/mirmon.db

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/mirmon/ \
	    ${PREFIX}/share/examples/mirmon/ ${ICONDIR}/icons/
	${INSTALL_SCRIPT} ${WRKSRC}/mirmon.pl ${PREFIX}/bin/mirmon
	${INSTALL_SCRIPT} ${WRKSRC}/Mirmon.pm ${PREFIX}/${P5SITE}/
	${INSTALL_SCRIPT} ${WRKSRC}/probe ${PREFIX}/bin/mirmon-probe
	${INSTALL_MAN} ${WRKSRC}/mirmon.1 ${WRKSRC}/mirmon.pm.1 \
	    ${PREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/RELEASE-NOTES ${PREFIX}/share/doc/mirmon/
	${INSTALL_DATA} ${WRKSRC}/countries.list ${WRKSRC}/mirmon.conf \
	    ${WRKSRC}/mirmon.db ${PREFIX}/share/examples/mirmon/
	${INSTALL_DATA} ${WRKSRC}/icons/* ${ICONDIR}/

.include <bsd.port.mk>
