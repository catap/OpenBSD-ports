COMMENT=		daemon for changing passwords

DISTNAME=		openpoppassd-1.1
REVISION =		12

FIX_EXTRACT_PERMISSIONS=Yes

CATEGORIES=		sysutils mail

HOMEPAGE=		http://www.ostc.de/projects.html\#openpoppassd

# BSD
PERMIT_PACKAGE=	Yes

WANTLIB += c

SITES=			http://www.ostc.de/
EXTRACT_SUFX=		.tgz

WRKDIST=		${WRKDIR}/openpoppassd

MAKE_ENV=		MANDIR="${PREFIX}/man/man" \
			BINDIR="${PREFIX}/libexec"

NO_TEST=		Yes

.include <bsd.port.mk>
