# $OpenBSD$

COMMENT =	KDE KIOslave for accessing audio CDs
DISTNAME =	audiocd-kio-${MODKDE_VERSION}

SHARED_LIBS =	audiocdplugins		0.0

WANTLIB =  c m pthread stdc++
WANTLIB += lib/qt4/QtDBus lib/qt4/QtGui lib/qt4/QtNetwork lib/qt4/QtSvg
WANTLIB += lib/qt4/QtXml
WANTLIB += kcompactdisc kdeui kio
WANTLIB += FLAC cdda_interface cdda_paranoia ogg vorbis vorbisenc
WANTLIB += vorbisfile

BUILD_DEPENDS =	x11/kde4/libkcddb

LIB_DEPENDS =	audio/cdparanoia \
		audio/flac \
		audio/libvorbis \
		x11/kde4/libkcompactdisc

.include <bsd.port.mk>
