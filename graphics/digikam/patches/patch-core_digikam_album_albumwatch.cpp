$NetBSD: patch-core_digikam_album_albumwatch.cpp,v 1.1 2013/05/23 11:18:26 markd Exp $

Don't watch individual files on NetBSD - runs out of file descriptors

--- core/digikam/album/albumwatch.cpp.orig	2013-05-13 07:51:25.000000000 +0000
+++ core/digikam/album/albumwatch.cpp
@@ -278,7 +278,7 @@ void AlbumWatch::slotAlbumAdded(Album* a
             // Disable file watch for OS X and Windows and hope for future
             // improvement (possibly with the improvements planned for
             // QFileSystemWatcher in Qt 5.1)
-#if defined(Q_WS_MAC) || defined(Q_WS_WIN)
+#if defined(Q_WS_MAC) || defined(Q_WS_WIN) || defined(Q_OS_NETBSD)
             d->dirWatch->addDir(dir, KDirWatch::WatchDirOnly);
 #else
             d->dirWatch->addDir(dir, KDirWatch::WatchFiles | KDirWatch::WatchDirOnly);
