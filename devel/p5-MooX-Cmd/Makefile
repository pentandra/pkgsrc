# $NetBSD: Makefile,v 1.5 2014/02/16 12:05:01 sno Exp $

DISTNAME=	MooX-Cmd-0.009
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/R/RE/REHSACK/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/MooX-Cmd
COMMENT=	Easy Moo style way to make command organized CLI apps
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Moo>=0.090013:../../devel/p5-Moo
DEPENDS+=	p5-Package-Stash>=0.33:../../devel/p5-Package-Stash
DEPENDS+=	p5-Regexp-Common>=2011121001:../../textproc/p5-Regexp-Common
DEPENDS+=	p5-Module-Pluggable>=4.8:../../devel/p5-Module-Pluggable
DEPENDS+=	p5-IO-TieCombine-[0-9]*:../../devel/p5-IO-TieCombine
DEPENDS+=	p5-MooX-Options>=4.002:../../devel/p5-MooX-Options

PERL5_PACKLIST=	auto/MooX/Cmd/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
