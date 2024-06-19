ONLY_FOR_ARCHS =	${GO_ARCHS}

COMMENT =		run SQL queries on CSV, LTSV, JSON, YAML and TBLN

MODGO_MODNAME =		github.com/noborus/trdsql
MODGO_VERSION =		v1.0.0

DISTNAME =		trdsql-${MODGO_VERSION}

CATEGORIES =		textproc

HOMEPAGE =		https://noborus.github.io/trdsql/

MAINTAINER =		Kirill A. Korinsky <kirill@korins.ky>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c pthread

MODULES =		lang/go

.include "modules.inc"

.include <bsd.port.mk>
