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
include guiplugin/setupframe/CMakeFiles/setupframe.dir/depend.make

# Include the progress variables for this target.
include guiplugin/setupframe/CMakeFiles/setupframe.dir/progress.make

# Include the compile flags for this target's objects.
include guiplugin/setupframe/CMakeFiles/setupframe.dir/flags.make

guiplugin/setupframe/moc_setupframe.cxx: ../guiplugin/setupframe/setupframe.h
guiplugin/setupframe/moc_setupframe.cxx: guiplugin/setupframe/moc_setupframe.cxx_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_setupframe.cxx"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe/moc_setupframe.cxx_parameters

guiplugin/setupframe/ui_setupframe.h: ../guiplugin/setupframe/setupframe.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_setupframe.h"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && /usr/lib/x86_64-linux-gnu/qt4/bin/uic -o /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe/ui_setupframe.h /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/guiplugin/setupframe/setupframe.ui

guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o: guiplugin/setupframe/CMakeFiles/setupframe.dir/flags.make
guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o: ../guiplugin/setupframe/setupframe.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/setupframe.dir/setupframe.cpp.o -c /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/guiplugin/setupframe/setupframe.cpp

guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/setupframe.dir/setupframe.cpp.i"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/guiplugin/setupframe/setupframe.cpp > CMakeFiles/setupframe.dir/setupframe.cpp.i

guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/setupframe.dir/setupframe.cpp.s"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/guiplugin/setupframe/setupframe.cpp -o CMakeFiles/setupframe.dir/setupframe.cpp.s

guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o.requires:

.PHONY : guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o.requires

guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o.provides: guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o.requires
	$(MAKE) -f guiplugin/setupframe/CMakeFiles/setupframe.dir/build.make guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o.provides.build
.PHONY : guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o.provides

guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o.provides.build: guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o


guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o: guiplugin/setupframe/CMakeFiles/setupframe.dir/flags.make
guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o: guiplugin/setupframe/moc_setupframe.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/setupframe.dir/moc_setupframe.cxx.o -c /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe/moc_setupframe.cxx

guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/setupframe.dir/moc_setupframe.cxx.i"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe/moc_setupframe.cxx > CMakeFiles/setupframe.dir/moc_setupframe.cxx.i

guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/setupframe.dir/moc_setupframe.cxx.s"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe/moc_setupframe.cxx -o CMakeFiles/setupframe.dir/moc_setupframe.cxx.s

guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o.requires:

.PHONY : guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o.requires

guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o.provides: guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o.requires
	$(MAKE) -f guiplugin/setupframe/CMakeFiles/setupframe.dir/build.make guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o.provides.build
.PHONY : guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o.provides

guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o.provides.build: guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o


# Object files for target setupframe
setupframe_OBJECTS = \
"CMakeFiles/setupframe.dir/setupframe.cpp.o" \
"CMakeFiles/setupframe.dir/moc_setupframe.cxx.o"

# External object files for target setupframe
setupframe_EXTERNAL_OBJECTS =

guiplugin/setupframe/setupframe.so: guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o
guiplugin/setupframe/setupframe.so: guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o
guiplugin/setupframe/setupframe.so: guiplugin/setupframe/CMakeFiles/setupframe.dir/build.make
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libGLU.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libGL.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
guiplugin/setupframe/setupframe.so: carbon/libcarbon.so.1.0.0
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
guiplugin/setupframe/setupframe.so: spark/libspark.so.1.1.0
guiplugin/setupframe/setupframe.so: lib/kerosin/libkerosin.so.2.2.0
guiplugin/setupframe/setupframe.so: lib/oxygen/liboxygen.so.6.1.0
guiplugin/setupframe/setupframe.so: utility/rcssnet/librcssnet3D.so.0.1.0
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libpthread.so
guiplugin/setupframe/setupframe.so: lib/zeitgeist/libzeitgeist.so.3.2.0
guiplugin/setupframe/setupframe.so: lib/salt/libsalt.so.1.0.0
guiplugin/setupframe/setupframe.so: utility/libobj/liblibobject.a
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libruby-2.3.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libfreetype.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libIL.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libGLU.so
guiplugin/setupframe/setupframe.so: /usr/lib/x86_64-linux-gnu/libGL.so
guiplugin/setupframe/setupframe.so: guiplugin/setupframe/CMakeFiles/setupframe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared module setupframe.so"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/setupframe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
guiplugin/setupframe/CMakeFiles/setupframe.dir/build: guiplugin/setupframe/setupframe.so

.PHONY : guiplugin/setupframe/CMakeFiles/setupframe.dir/build

guiplugin/setupframe/CMakeFiles/setupframe.dir/requires: guiplugin/setupframe/CMakeFiles/setupframe.dir/setupframe.cpp.o.requires
guiplugin/setupframe/CMakeFiles/setupframe.dir/requires: guiplugin/setupframe/CMakeFiles/setupframe.dir/moc_setupframe.cxx.o.requires

.PHONY : guiplugin/setupframe/CMakeFiles/setupframe.dir/requires

guiplugin/setupframe/CMakeFiles/setupframe.dir/clean:
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe && $(CMAKE_COMMAND) -P CMakeFiles/setupframe.dir/cmake_clean.cmake
.PHONY : guiplugin/setupframe/CMakeFiles/setupframe.dir/clean

guiplugin/setupframe/CMakeFiles/setupframe.dir/depend: guiplugin/setupframe/moc_setupframe.cxx
guiplugin/setupframe/CMakeFiles/setupframe.dir/depend: guiplugin/setupframe/ui_setupframe.h
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/guiplugin/setupframe /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/guiplugin/setupframe/CMakeFiles/setupframe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : guiplugin/setupframe/CMakeFiles/setupframe.dir/depend

