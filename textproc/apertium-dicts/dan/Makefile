L =	dan
LANG =	Danish
V =	0.7.0
REVISION =	0

BUILD_DEPENDS +=	textproc/vislcg3

USE_GMAKE =	Yes

EXTRACT_SUFX =	.tar.bz2

AUTOCONF_VERSION =	2.71
AUTOMAKE_VERSION =	1.16

CONFIGURE_STYLE =	autoreconf

post-extract:
	sed -i 's,/bin/bash,${LOCALBASE}/bin/bash,' \
		${WRKSRC}/test-scandivoc

.include <bsd.port.mk>
