# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build

# Include any dependencies generated for this target.
include test/scenetest/CMakeFiles/scenetest.dir/depend.make

# Include the progress variables for this target.
include test/scenetest/CMakeFiles/scenetest.dir/progress.make

# Include the compile flags for this target's objects.
include test/scenetest/CMakeFiles/scenetest.dir/flags.make

test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o: test/scenetest/CMakeFiles/scenetest.dir/flags.make
test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o: ../test/scenetest/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/scenetest.dir/main.cpp.o -c /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/main.cpp

test/scenetest/CMakeFiles/scenetest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scenetest.dir/main.cpp.i"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/main.cpp > CMakeFiles/scenetest.dir/main.cpp.i

test/scenetest/CMakeFiles/scenetest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scenetest.dir/main.cpp.s"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/main.cpp -o CMakeFiles/scenetest.dir/main.cpp.s

test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o.requires:

.PHONY : test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o.requires

test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o.provides: test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o.requires
	$(MAKE) -f test/scenetest/CMakeFiles/scenetest.dir/build.make test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o.provides.build
.PHONY : test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o.provides

test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o.provides.build: test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o


test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o: test/scenetest/CMakeFiles/scenetest.dir/flags.make
test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o: ../test/scenetest/md5mesh.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/scenetest.dir/md5mesh.cpp.o -c /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/md5mesh.cpp

test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scenetest.dir/md5mesh.cpp.i"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/md5mesh.cpp > CMakeFiles/scenetest.dir/md5mesh.cpp.i

test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scenetest.dir/md5mesh.cpp.s"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/md5mesh.cpp -o CMakeFiles/scenetest.dir/md5mesh.cpp.s

test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o.requires:

.PHONY : test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o.requires

test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o.provides: test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o.requires
	$(MAKE) -f test/scenetest/CMakeFiles/scenetest.dir/build.make test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o.provides.build
.PHONY : test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o.provides

test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o.provides.build: test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o


test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o: test/scenetest/CMakeFiles/scenetest.dir/flags.make
test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o: ../test/scenetest/md5mesh_c.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/scenetest.dir/md5mesh_c.cpp.o -c /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/md5mesh_c.cpp

test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scenetest.dir/md5mesh_c.cpp.i"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/md5mesh_c.cpp > CMakeFiles/scenetest.dir/md5mesh_c.cpp.i

test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scenetest.dir/md5mesh_c.cpp.s"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest/md5mesh_c.cpp -o CMakeFiles/scenetest.dir/md5mesh_c.cpp.s

test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o.requires:

.PHONY : test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o.requires

test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o.provides: test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o.requires
	$(MAKE) -f test/scenetest/CMakeFiles/scenetest.dir/build.make test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o.provides.build
.PHONY : test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o.provides

test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o.provides.build: test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o


# Object files for target scenetest
scenetest_OBJECTS = \
"CMakeFiles/scenetest.dir/main.cpp.o" \
"CMakeFiles/scenetest.dir/md5mesh.cpp.o" \
"CMakeFiles/scenetest.dir/md5mesh_c.cpp.o"

# External object files for target scenetest
scenetest_EXTERNAL_OBJECTS =

test/scenetest/scenetest: test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o
test/scenetest/scenetest: test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o
test/scenetest/scenetest: test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o
test/scenetest/scenetest: test/scenetest/CMakeFiles/scenetest.dir/build.make
test/scenetest/scenetest: lib/kerosin/libkerosin.so.2.2.0
test/scenetest/scenetest: lib/oxygen/liboxygen.so.6.1.0
test/scenetest/scenetest: lib/zeitgeist/libzeitgeist.so.3.2.0
test/scenetest/scenetest: lib/salt/libsalt.so.1.0.0
test/scenetest/scenetest: utility/libobj/liblibobject.a
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libruby-2.3.so
test/scenetest/scenetest: utility/rcssnet/librcssnet3D.so.0.1.0
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libboost_thread.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libboost_system.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libboost_regex.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libpthread.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libfreetype.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libIL.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libGLU.so
test/scenetest/scenetest: /usr/lib/x86_64-linux-gnu/libGL.so
test/scenetest/scenetest: test/scenetest/CMakeFiles/scenetest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable scenetest"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scenetest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/scenetest/CMakeFiles/scenetest.dir/build: test/scenetest/scenetest

.PHONY : test/scenetest/CMakeFiles/scenetest.dir/build

test/scenetest/CMakeFiles/scenetest.dir/requires: test/scenetest/CMakeFiles/scenetest.dir/main.cpp.o.requires
test/scenetest/CMakeFiles/scenetest.dir/requires: test/scenetest/CMakeFiles/scenetest.dir/md5mesh.cpp.o.requires
test/scenetest/CMakeFiles/scenetest.dir/requires: test/scenetest/CMakeFiles/scenetest.dir/md5mesh_c.cpp.o.requires

.PHONY : test/scenetest/CMakeFiles/scenetest.dir/requires

test/scenetest/CMakeFiles/scenetest.dir/clean:
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest && $(CMAKE_COMMAND) -P CMakeFiles/scenetest.dir/cmake_clean.cmake
.PHONY : test/scenetest/CMakeFiles/scenetest.dir/clean

test/scenetest/CMakeFiles/scenetest.dir/depend:
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/test/scenetest /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/test/scenetest/CMakeFiles/scenetest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/scenetest/CMakeFiles/scenetest.dir/depend

