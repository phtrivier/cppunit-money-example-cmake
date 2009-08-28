CPPUNIT / Money / CMake example

--

Sometimes I have to use C++.
I like unit tests.
I don't like Makefiles.

CMake makes it almost *feasible* to write "something that will compile to make files".

CMake cannot find if CPPUNIT is installed by default.

This project is my lame attempt to fix all this.

I took the example from the CPPUNIT cookbook (http://cppunit.sourceforge.net/doc/lastest/money_example.html)

I loosely based the CMake stuffon the "GNU_Style" CMake example (http://www.cmake.org/Wiki/CMake:GNU_style_example).

The FindCPPUNIT stuff was found in the cmake groups, in a post by Anton Deguet, and adapted (http://www.cmake.org/pipermail/cmake/2006-October/011446.html).


--

You should do "out-of-source" build (look in the CMake FAQ : http://www.cmake.org/Wiki/CMake_FAQ#What_is_an_.22out-of-source.22_build.3F). There is an "oos-build.sh" script to set up an out-of-source build.

DON'T EVER DO THIS

 cd code # DON'T
 cmake . # DO
 make    # THIS

THIS IS BAD. This will cripple your codebase with cmake-generated files, makefiles, and stuff. This is useless, ugly, and Cmake make out-of-source build very nice.

If you ever do this, there is a "clean-cmake-files.sh" script to restore some sanity.

How to do an out-of-source build ?

 mkdir build
 cd build
 cmake ../code
 make

NO, it will not mean more code. NO, it won't make anything longer, or take more disk space. It will just make sure your 'code' folder is not polluted with generated Makefiles. Which is good.
This way, you only have to tell git to ignore "build" alltogether, and you're done.

--

Nice tasks are :

 make tests

  Compile whatever you need, build a 'run_tests' program in the "build/bin" folder, and run it. It uses the good old text-base test runner. This is what you should be running all dong long.

 make run_tests

  Compile whatever you need, and run the test runner *only when something had to be rebuilt*


I separated test code from source code. Actually, there is a different library for the tests.

In the real world, you will have to edit some of the CMakeLists.txt files to add your own source (I still have to find how you can tell CMake to "use all the fracking cpp files in the current folder, dude")

--

This code is released under the "Do What The Fuck You Want Public License" (see COPYING.txt)

Copyleft 2009 Pierre-Henri Trivier
