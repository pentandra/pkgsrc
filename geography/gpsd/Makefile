# $NetBSD: Makefile,v 1.26 2014/01/25 10:30:08 wiz Exp $

DISTNAME=	gpsd-2.96
PKGREVISION=	1
CATEGORIES=	geography
MASTER_SITES=	http://download.berlios.de/gpsd/

MAINTAINER=	gdt@NetBSD.org
HOMEPAGE=	http://gpsd.berlios.de/
COMMENT=	GPS information daemon

LICENSE=	modified-bsd

# XXX: In theory this is not necessary.
BUILD_DEPENDS+=	xmlto-[0-9]*:../../textproc/xmlto

GNU_CONFIGURE=	YES
CONFIGURE_ENV+=	PYTHON=${PYTHONBIN}
PY_PATCHPLIST=	yes
PYTHON_VERSIONS_INCOMPATIBLE=	33 # not yet ported as of 2.96

USE_TOOLS+=	gmake
USE_LIBTOOL=	yes
USE_LANGUAGES=	c99 c++
USE_NCURSES=	yes

CFLAGS.SunOS=	-DLOG_PERROR=0

INSTALLATION_DIRS=	sbin

TEST_TARGET=	check

.include "../../devel/ncurses/buildlink3.mk"
.include "../../lang/python/extension.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
