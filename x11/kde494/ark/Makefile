# $OpenBSD$

COMMENT =	K Desktop Environment, file archiver
DISTNAME =	ark-${MODKDE_VERSION}

SHARED_LIBS =	kerfuffle	0.0 # 4.7

WANTLIB =  lib/qt4/QtDBus lib/qt4/QtGui lib/qt4/QtNetwork lib/qt4/QtSvg
WANTLIB += lib/qt4/QtXml archive c kdeui kfile khtml kio kjs konq kparts
WANTLIB += kpty m nepomuk nepomukutils phonon_s pthread soprano stdc++

BUILD_DEPENDS =	archivers/bzip2 \
		archivers/xz

LIB_DEPENDS =	archivers/libarchive \
		x11/kde4/baseapps

REGRESS_DEPENDS =	devel/qjson

.include <bsd.port.mk>
