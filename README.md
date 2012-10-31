Examples
========

Collection of independent CMake-based projects illustrating how to build and link against CTK.

Build Instructions
------------------

* First [download and build CTK](http://www.commontk.org/index.php/Build_Instructions)
```
~/work$ git clone git://github.com/commontk/CTK.git
~/work$ mkdir CTK-Superbuild
~/work/CTK-Superbuild$ cd CTK-Superbuild
~/work/CTK-Superbuild$ ccmake ../CTK
~/work/CTK-Superbuild$ make
```

* Then download and build Examples
```
~/work$ git clone git://github.com/commontk/Examples.git
~/work$ mkdir Examples-build
~/work$ cd Examples-build
~/work/Examples-build$ ccmake ../Examples -DCTK_DIR:PATH=~/work/CTK-Superbuild/
~/work/Examples-build$ make
```

* Run example1
```
~/work/Examples-build$ ./Example1/example1
```

Help
----

More information on the CommonToolkit webpage:
* http://www.commontk.org

Ask your questions on the CTK developer mailing list:
* http://public.kitware.com/cgi-bin/mailman/listinfo/ctk-developers