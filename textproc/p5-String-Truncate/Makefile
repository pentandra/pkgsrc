# $NetBSD: Makefile,v 1.6 2014/01/12 10:30:51 wen Exp $

DISTNAME=	String-Truncate-1.100601
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=String/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/String-Truncate/
COMMENT=	Perl5 module for when strings are too long to be displayed
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Sub-Exporter>=0.953:../../devel/p5-Sub-Exporter
DEPENDS+=	p5-Sub-Install>=0.030:../../devel/p5-Sub-Exporter

# EU::MM 6.31 is in core as well as Test::More 0.96 (we have 0.98)

PERL5_PACKLIST=		auto/String/Truncate/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
