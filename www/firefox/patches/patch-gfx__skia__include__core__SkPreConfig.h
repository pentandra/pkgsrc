$NetBSD: patch-gfx__skia__include__core__SkPreConfig.h,v 1.4 2014/02/20 13:19:03 ryoon Exp $

Configure sparc cpus as big endian (Bugzilla #884376)

diff -r 581ea0e6531e gfx/skia/include/core/SkPreConfig.h
--- gfx/skia/include/core/SkPreConfig.h.orig	2013-10-25 22:27:18.000000000 +0000
+++ gfx/skia/include/core/SkPreConfig.h
@@ -100,7 +100,7 @@
 
 #if !defined(SK_CPU_BENDIAN) && !defined(SK_CPU_LENDIAN)
     #if defined (__ppc__) || defined(__PPC__) || defined(__ppc64__) \
-        || defined(__PPC64__)
+        || defined(__PPC64__) || defined(__sparc) || defined(__sparc__)
         #define SK_CPU_BENDIAN
     #else
         #define SK_CPU_LENDIAN
