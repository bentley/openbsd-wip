# $OpenBSD: Makefile.template,v 1.61 2012/03/29 13:41:58 sthen Exp $

COMMENT =		library for communication with Phidgets USB devices

DISTNAME =		libphidget_2.1.8.20120912
PKGNAME =		${DISTNAME:S/_/-/}

SHARED_LIBS +=	phidget21                 0.0 # 0.0

CATEGORIES =		devel

HOMEPAGE =		https://www.phidgets.com

# LGPLv3 (but no license statements in source files)
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

WANTLIB +=	m pthread usb usb-1.0

MASTER_SITES =		${HOMEPAGE}/downloads/libraries/

MODULES =		converters/libiconv
LIB_DEPENDS =		devel/libusb-compat

USE_LIBTOOL =		Yes
CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -lusb" \
			CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include"

WRKDIST =		${WRKDIR}/${DISTNAME:S/_/-/}

.include <bsd.port.mk>
