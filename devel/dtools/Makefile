# Can't use gdc yet
ONLY_FOR_ARCHS =	amd64 i386

COMMENT =	ancillary tools for the D programming language compiler
DISTNAME =	d${GH_PROJECT}-${GH_TAGNAME:S/^v//}
CATEGORIES =	devel

# Keep GH_TAGNAME in sync with lang/dmd
GH_ACCOUNT =	dlang
GH_PROJECT =	tools
GH_TAGNAME =	v2.108.1

HOMEPAGE =	https://dlang.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# Boost Software License 1.0
PERMIT_PACKAGE =	Yes

WANTLIB += c c++abi execinfo m pthread

BUILD_DEPENDS =	lang/dmd

USE_GMAKE =	Yes
MAKE_FILE =	posix.mak
MAKE_FLAGS =	DMD="${LOCALBASE}/bin/dmd"

.if ${MACHINE_ARCH} == "powerpc"
# ld: error: relocation refers to a discarded section
USE_LLD =	No
.endif

FAKE_FLAGS =	INSTALL_DIR="${DESTDIR}${PREFIX}"

# Tests requires dub, during a test run dub pulls in external dependencies.
NO_TEST =	Yes

# Avoid conflict with textproc/catdoc
post-install:
	mv ${PREFIX}/bin/catdoc ${PREFIX}/bin/catdocd

.include <bsd.port.mk>
