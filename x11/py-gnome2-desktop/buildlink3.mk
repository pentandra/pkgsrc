# $NetBSD: buildlink3.mk,v 1.31 2014/02/12 23:18:53 tron Exp $

BUILDLINK_TREE+=	py-gnome2-desktop

.if !defined(PY_GNOME2_DESKTOP_BUILDLINK3_MK)
PY_GNOME2_DESKTOP_BUILDLINK3_MK:=

.include "../../lang/python/pyversion.mk"

BUILDLINK_API_DEPENDS.py-gnome2-desktop+=${PYPKGPREFIX}-gnome2-desktop>=2.16.0
BUILDLINK_ABI_DEPENDS.py-gnome2-desktop?=${PYPKGPREFIX}-gnome2-desktop>=2.32.0nb33
BUILDLINK_PKGSRCDIR.py-gnome2-desktop?=	../../x11/py-gnome2-desktop

.include "../../x11/py-gnome2/buildlink3.mk"
.endif # PY_GNOME2_DESKTOP_BUILDLINK3_MK

BUILDLINK_TREE+=	-py-gnome2-desktop
