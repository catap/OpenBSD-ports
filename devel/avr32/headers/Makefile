COMMENT = 	Atmel AVR 32-bit header files
V = 		6.1.3.1475
DISTNAME = 	atmel-headers-${V}
PKGNAME = 	avr32-headers-${V}
REVISION =	0

# BSD
PERMIT_PACKAGE =	Yes

EXTRACT_SUFX = 		.zip
CONFIGURE_STYLE = 	none
NO_BUILD = 		Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/avr32/include
	cp -r ${WRKSRC}/avr32 ${PREFIX}/avr32/include
	chown -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/avr32/include/avr32

.include <bsd.port.mk>
