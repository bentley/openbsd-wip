# $OpenBSD$

COMMENT =	K Desktop Environment, KDE4 bindings for Python
DISTNAME =	pykde4-${MODKDE_VERSION}
PKGNAME =	py-kde-${MODKDE_VERSION}
REVISION =	0

MODULES =	lang/python

WANTLIB =  c m pthread stdc++
WANTLIB += lib/qt4/QtDBus lib/qt4/QtGui lib/qt4/QtNetwork lib/qt4/QtSvg
WANTLIB += lib/qt4/QtXml
WANTLIB += akonadi-kde akonadi-kmime
WANTLIB += kcmutils kdeui kdnssd kemoticons kfile khtml
WANTLIB += kidletime kio kjs knewstuff2 knewstuff3 kparts kprintutils
WANTLIB += kpty ktexteditor kutils nepomuk nepomukquery nepomukutils
WANTLIB += phonon_s plasma solid soprano sopranoclient sopranoserver
WANTLIB += ${MODPY_WANTLIB}

VMEM_WARNING =  Yes

MODKDE4_USE =	libs pim

BUILD_DEPENDS =	STEM->=4.14.1:devel/py-sip \
		misc/shared-desktop-ontologies \
		STEM->=4.9.5:x11/py-qt4

RUN_DEPENDS =	misc/shared-desktop-ontologies \
		STEM->=4.9.5:x11/py-qt4

LIB_DEPENDS = 	databases/soprano

# One who said that Polkit-Qt-1 is a drop-in replacement
# for Polkit-Qt, is probably the one who said that
# 640 kilobytes ought to be enough for everybody.
CONFIGURE_ARGS =	-DWITH_PolkitQt:Bool=FALSE

.include <bsd.port.mk>
