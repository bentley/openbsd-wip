# $OpenBSD: Makefile,v 1.5 2010/08/31 08:22:05 jasper Exp $

CATEGORIES =	graphics
COMMENT =	K Desktop Environment, image effects
DISTNAME =	qimageblitz-${QIMAGEBLITZ_VERSION}
REVISION =	2

EXTRACT_SUFX =	.tar.bz2

SHARED_LIBS =	qimageblitz         0.0      # .4.0

# 2-clause BSDL
PERMIT_DISTFILES_CDROM =        Yes
PERMIT_DISTFILES_FTP =          Yes
PERMIT_PACKAGE_CDROM =          Yes
PERMIT_PACKAGE_FTP =            Yes

MASTER_SITES =	${MASTER_SITE_KDE:=stable/qimageblitz/}

WANTLIB =  c lib/qt4/QtGui m pthread stdc++

MODULES =	x11/kde4
MODKDE4_USE =

.include <bsd.port.mk>
