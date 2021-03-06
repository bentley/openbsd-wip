# $OpenBSD: Makefile.inc,v 1.12 2010/07/10 16:57:22 espie Exp $

MODKDE4_VERSION =	4.9.90
CATEGORIES ?=		x11
CATEGORIES +=		x11/kde4
MODULES +=		x11/kde4

MASTER_SITES ?=		${MASTER_SITE_KDE:=unstable/${MODKDE4_VERSION}/src/}
DIST_SUBDIR =		kde
MAINTAINER ?=		KDE porting team <openbsd-kde@googlegroups.com>

.if defined(MODKDE4_USE) && ${MODKDE4_USE:Mgames}
HOMEPAGE ?=		http://games.kde.org/game.php?game=${DISTNAME:C/-[0-9].*//}
.else
HOMEPAGE ?=		https://projects.kde.org/projects
.endif

# KDE SC is mostly GPL, or LGPL/BSDL for the central libraries
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes

# Do not rely on devel/cmake here: additional modules that are
# set up in ports may have, say, lang/python before devel/cmake,
# thus making lang/python evaluating first. And when lang/python
# sees empty CONFIGURE_STYLE, it forces that this is Python
# module port, and breaks build.
CONFIGURE_STYLE =	cmake

MODKDE4_LIB_LINKS =	Yes

MIN_AKONADI_VERSION =	1.8.53
