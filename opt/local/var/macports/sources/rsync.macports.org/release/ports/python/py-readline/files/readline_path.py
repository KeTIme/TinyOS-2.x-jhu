import sys
lib_dynload="__LIBDIR__/lib-dynload"
site_packages="__LIBDIR__/site-packages"
for i in range(len(sys.path)):
    if sys.path[i] == lib_dynload:
        sys.path.insert(i, site_packages+"/readline")
        break
