# $NetBSD: Makefile,v 1.22 2014/02/12 23:18:07 tron Exp $
#

DISTNAME=		elmo-1.3.2
PKGREVISION=		9
CATEGORIES=		mail
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=elmo/}

MAINTAINER=		pkg@burningsoda.com
HOMEPAGE=		http://elmo.sourceforge.net/
COMMENT=		The ELectronic Mail Operator MUA

USE_LANGUAGES=		c c++
USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		flex perl:run
GNU_CONFIGURE=		yes

REPLACE_PERL=		src/elmoconf.pl

CONFIGURE_ARGS+=	--with-gpgme-prefix=${BUILDLINK_PREFIX.gpgme}
CONFIGURE_ARGS+=	--with-openssl=${BUILDLINK_PREFIX.openssl}
# I get segmentation faults when not compiled with debug enabled
CONFIGURE_ARGS+=	--enable-debug

.include "../../devel/ncurses/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../security/gpgme/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
