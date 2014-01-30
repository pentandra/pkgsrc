# $NetBSD: Makefile,v 1.22 2014/01/25 10:30:24 wiz Exp $

PKGNAME=	${PYPKGPREFIX}-expat-${PY_DISTVERSION}
CATEGORIES=	textproc python

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.python.org/
COMMENT=	Python interface to expat

USE_MULTIARCH=		lib
MULTIARCH_DIRS.lib=	${PYLIB}/lib-dynload

EXTRACT_ELEMENTS=	${PYSUBDIR}/Modules/pyexpat.c

USE_GCC_RUNTIME=yes

PYDISTUTILSPKG=	yes
PY_PATCHPLIST=	yes
PY_SETUP_SUBST+= EXPATPREFIX=${BUILDLINK_DIR}
PY_SETUP_SUBST+= EXPATRTPREFIX=${BUILDLINK_PREFIX.expat}
PY_SETUP_SUBST+= LIBARCHSUFFIX=${LIBARCHSUFFIX}

PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX:Q}
PYSETUPINSTALLARGS+=	--install-lib ${PREFIX}/${PYLIB}/lib-dynload${LIBARCHSUFFIX}

# ignore errors due to missing files (EXTRACT_ELEMENTS!)
do-patch:
	(cd ${WRKSRC}; \
	for f in ${PATCHDIR}/patch-*;do \
	${PATCH} --batch <$$f || ${TRUE}; \
	done)

.include "../../textproc/expat/buildlink3.mk"
.include "../../lang/python/extension.mk"
.include "../../lang/python/srcdist.mk"
.include "../../mk/bsd.pkg.mk"
