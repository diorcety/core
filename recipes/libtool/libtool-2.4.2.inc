LICENSE = "GPL-2.0+"
LICENSE_${PN}-libltdl = "LGPL-2.1+"

require ${PN}.inc

SRC_URI:>native = " file://syslib.patch"
SRC_URI:>cross = " file://syslib.patch file://cross_compile.patch ${SRC_URI_WINDOWS}"
SRC_URI:>sdk-cross = " file://syslib.patch file://cross_compile.patch ${SRC_URI_WINDOWS}"

SRC_URI_WINDOWS = ""
SRC_URI_WINDOWS:TARGET_LIBC_mingw = "file://default-bindir.patch"
