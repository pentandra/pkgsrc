# $NetBSD: Makefile,v 1.16 2013/05/31 12:40:47 wiz Exp $

DISTNAME=		Test-ClassAPI-1.06
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		5
CATEGORIES=		devel perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Test/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Test-ClassAPI/
COMMENT=		Provide basic first-pass API testing for large class trees
LICENSE=		${PERL5_LICENSE}

DEPENDS+=		p5-Class-Inspector>=1.12:../../devel/p5-Class-Inspector
DEPENDS+=		p5-Config-Tiny>=2.0:../../devel/p5-Config-Tiny
DEPENDS+=		p5-Params-Util>=1.00:../../devel/p5-Params-Util

PKG_INSTALLATION_TYPES=	overwrite pkgviews

PERL5_PACKLIST=		auto/Test/ClassAPI/.packlist
PERL5_MODULE_TYPE=	Module::Install::Bundled

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
