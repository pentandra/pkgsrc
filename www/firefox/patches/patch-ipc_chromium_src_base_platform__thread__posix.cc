$NetBSD: patch-ipc_chromium_src_base_platform__thread__posix.cc,v 1.4 2014/02/08 09:36:00 ryoon Exp $

--- ipc/chromium/src/base/platform_thread_posix.cc.orig	2014-01-28 04:03:44.000000000 +0000
+++ ipc/chromium/src/base/platform_thread_posix.cc
@@ -10,7 +10,9 @@
 #if defined(OS_MACOSX)
 #include <mach/mach.h>
 #elif defined(OS_NETBSD)
+_Pragma("GCC visibility push(default)")
 #include <lwp.h>
+_Pragma("GCC visibility pop")
 #elif defined(OS_LINUX)
 #include <sys/syscall.h>
 #include <sys/prctl.h>
@@ -114,7 +116,8 @@ void PlatformThread::SetName(const char*
   pthread_setname_np(pthread_self(), "%s", (void *)name);
 #elif defined(OS_BSD) && !defined(__GLIBC__)
   pthread_set_name_np(pthread_self(), name);
-#else
+#elif !defined(OS_SOLARIS)
+  prctl(PR_SET_NAME, reinterpret_cast<uintptr_t>(name), 0, 0, 0);
 #endif
 }
 #endif // !OS_MACOSX
