BROKEN-hppa=		__sync_lock_test_and_set_4 in zzuf_mutex_lock

COMMENT=		transparent application input fuzzer

VERSION=		0.15
DISTNAME=		zzuf-${VERSION}

CATEGORIES=		misc security

SITES=	https://github.com/samhocevar/zzuf/releases/download/v${VERSION}/

# WTFPL
PERMIT_PACKAGE=	Yes

WANTLIB=		c m

CONFIGURE_STYLE=	gnu
# Necessary?
USE_GROFF=		Yes

.include <bsd.port.mk>
