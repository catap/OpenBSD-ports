COMMENT=		allow keyword access to array instances

DISTNAME=		arrayfields-4.9.2
CATEGORIES=		devel

HOMEPAGE=		http://codeforpeople.com/lib/ruby/arrayfields/

MAINTAINER=		Jeremy Evans <jeremy@openbsd.org>

# Ruby license
PERMIT_PACKAGE=	Yes

MODULES=		lang/ruby

CONFIGURE_STYLE=	ruby gem

do-test:
	@cd ${WRKBUILD} && ${RUBY} test/*.rb

.include <bsd.port.mk>
