# $NetBSD: Makefile,v 1.5 2014/02/12 23:17:43 tron Exp $

PKGNAME=	${DISTNAME:C/-/92-pgcrypto-/}
PKGREVISION=	1
COMMENT=	Module providing cryptographic functions for PostgreSQL

DEPENDS+=	postgresql92-server>=${PKGVERSION_NOREV}:../../databases/postgresql92-server

.include "../../databases/postgresql92/Makefile.common"

CONFIGURE_ARGS+=	--with-zlib
BUILD_MAKE_FLAGS=	PGXS=1

BUILD_DIRS=		contrib/pgcrypto

.include "../../databases/postgresql92-client/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
