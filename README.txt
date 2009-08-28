CPPUNIT / Money / CMake example

Sometimes I have to use C++.
I like unit tests.
I don't like Makefiles.

CMake makes it almost *feasible* to write "something that will compile to make files".

CMake cannot find if CPPUNIT is installed by default.

This project is my lame attempt to fix all this.
It is loosely based on the "GNU_Style" CMake example (http://www.cmake.org/Wiki/CMake:GNU_style_example).
The FindCPPUNIT stuff was found in the cmake groups, in a post by Anton Deguet, and adapted (http://www.cmake.org/pipermail/cmake/2006-October/011446.html).

You should use it to do "out-of-source" build (look in the CMake FAQ if you don't know what this means). There is an "oos-build.sh" script to set up an out-of-source build.

I separated test code from source code. Actually, there is a different library for the tests.

In the real world, you will have to edit some of the CMakeLists.txt files to add your own source (I still have to find how you can tell CMake to "use all the fracking cpp files in the current folder, dude")

This code is released under the "Do What The Fuck You Want Public License" (see COPYING.txt)

Copyleft 2009 Pierre-Henri Trivier
