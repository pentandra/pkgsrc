# $NetBSD: Makefile,v 1.3 2013/09/15 10:09:21 taca Exp $

DISTNAME=	minitest-5.0.7
CATEGORIES=	devel

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/seattlerb/minitest
COMMENT=	Complete suite of testing facilities for Ruby

DEPENDS+=	${RUBY_PKGPREFIX}-hoe>=3.5:../../devel/hoe
CONFLICTS+=	ruby[1-9][0-9][0-9]-minitest-[0-9]*

RUBY_RDOC_REQD=	3.10

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
