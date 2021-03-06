# $OpenBSD  $

COMMENT=	POP/IMAP/SMTP/CalDAV/CardDAV/LDAP Exchange Gateway

V=		145
DISTNAME=	ij${V}
PKGNAME= 	imagej-${V}
CATEGORIES=	graphics misc

HOMEPAGE=	http://rsbweb.nih.gov/ij/

EXTRACT_SUFX =         .zip

# Public Domain
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	${HOMEPAGE}/download/zips/

MODULES=	java
MODJAVA_VER=	1.5+
MODJAVA_JRERUN= Yes
MAKE_ENV+=              JAVA_HOME=${JAVA_HOME}
RUN_DEPENDS=            java/javaPathHelper

NO_BUILD=	Yes
NO_REGRESS=	Yes

PKG_ARCH=	*

INSTALL_DIR =           imagej

do-install:
	${INSTALL_DATA} ${WRKDIR}/ImageJ/run	${PREFIX}/bin/imagej
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/luts
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/macros
	${INSTALL_DATA} ${WRKDIR}/ImageJ/README.html		${PREFIX}/share/${INSTALL_DIR}/
	#${INSTALL_DATA} ${WRKDIR}/ImageJ/luts/*		${PREFIX}/share/${INSTALL_DIR}/luts/
	#${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/*		${PREFIX}/share/${INSTALL_DIR}/plugins/
	#${INSTALL_DATA} ${WRKDIR}/ImageJ/macros/*		${PREFIX}/share/${INSTALL_DIR}/macros/
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/macros/tools
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/macros/toolsets
	${INSTALL_DATA} ${WRKDIR}/ImageJ/macros/tools/*		${PREFIX}/share/${INSTALL_DIR}/macros/tools/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/macros/toolsets/*	${PREFIX}/share/${INSTALL_DIR}/macros/toolsets/
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/3D
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Analyze
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Color
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Examples
	#${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Examples/-Macros
	#${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Examples/-Scripts
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Filters
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Graphics
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Input-Output
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Macros
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Stacks
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/Tools
	${INSTALL_DATA_DIR} ${PREFIX}/share/${INSTALL_DIR}/plugins/jars
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/3D/*			${PREFIX}/share/${INSTALL_DIR}/plugins/3D/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Analyze/*       ${PREFIX}/share/${INSTALL_DIR}/plugins/Analyze/
	#${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Examples/*      ${PREFIX}/share/${INSTALL_DIR}/plugins/Examples/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Examples/-Macros/*      ${PREFIX}/share/${INSTALL_DIR}/plugins/Examples/-Macros/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Examples/-Scripts/*     ${PREFIX}/share/${INSTALL_DIR}/plugins/Examples/-Scripts/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Filters/*       ${PREFIX}/share/${INSTALL_DIR}/plugins/Filters/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Graphics/*      ${PREFIX}/share/${INSTALL_DIR}/plugins/Graphics/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Input-Output/*  ${PREFIX}/share/${INSTALL_DIR}/plugins/Input-Output/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Macros/*		${PREFIX}/share/${INSTALL_DIR}/plugins/Macros/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Stacks/*        ${PREFIX}/share/${INSTALL_DIR}/plugins/Stacks/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/Tools/*         ${PREFIX}/share/${INSTALL_DIR}/plugins/Tools/
	${INSTALL_DATA} ${WRKDIR}/ImageJ/plugins/jars/*          ${PREFIX}/share/${INSTALL_DIR}/plugins/jars/

.include <bsd.port.mk>
