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
include plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/depend.make

# Include the progress variables for this target.
include plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/progress.make

# Include the compile flags for this target's objects.
include plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/flags.make

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/flags.make
plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o: ../plugin/timersystemsdl/export.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timersystemsdl.dir/export.cpp.o -c /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/export.cpp

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timersystemsdl.dir/export.cpp.i"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/export.cpp > CMakeFiles/timersystemsdl.dir/export.cpp.i

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timersystemsdl.dir/export.cpp.s"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/export.cpp -o CMakeFiles/timersystemsdl.dir/export.cpp.s

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o.requires:

.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o.requires

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o.provides: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o.requires
	$(MAKE) -f plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/build.make plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o.provides.build
.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o.provides

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o.provides.build: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o


plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/flags.make
plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o: ../plugin/timersystemsdl/timersystemsdl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o -c /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/timersystemsdl.cpp

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.i"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/timersystemsdl.cpp > CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.i

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.s"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/timersystemsdl.cpp -o CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.s

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o.requires:

.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o.requires

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o.provides: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o.requires
	$(MAKE) -f plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/build.make plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o.provides.build
.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o.provides

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o.provides.build: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o


plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/flags.make
plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o: ../plugin/timersystemsdl/timersystemsdl_c.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o -c /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/timersystemsdl_c.cpp

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.i"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/timersystemsdl_c.cpp > CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.i

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.s"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl/timersystemsdl_c.cpp -o CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.s

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o.requires:

.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o.requires

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o.provides: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o.requires
	$(MAKE) -f plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/build.make plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o.provides.build
.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o.provides

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o.provides.build: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o


# Object files for target timersystemsdl
timersystemsdl_OBJECTS = \
"CMakeFiles/timersystemsdl.dir/export.cpp.o" \
"CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o" \
"CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o"

# External object files for target timersystemsdl
timersystemsdl_EXTERNAL_OBJECTS =

plugin/timersystemsdl/timersystemsdl.so: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o
plugin/timersystemsdl/timersystemsdl.so: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o
plugin/timersystemsdl/timersystemsdl.so: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o
plugin/timersystemsdl/timersystemsdl.so: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/build.make
plugin/timersystemsdl/timersystemsdl.so: /usr/lib/x86_64-linux-gnu/libSDLmain.a
plugin/timersystemsdl/timersystemsdl.so: /usr/lib/x86_64-linux-gnu/libSDL.so
plugin/timersystemsdl/timersystemsdl.so: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared module timersystemsdl.so"
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/timersystemsdl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/build: plugin/timersystemsdl/timersystemsdl.so

.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/build

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/requires: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/export.cpp.o.requires
plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/requires: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl.cpp.o.requires
plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/requires: plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/timersystemsdl_c.cpp.o.requires

.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/requires

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/clean:
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl && $(CMAKE_COMMAND) -P CMakeFiles/timersystemsdl.dir/cmake_clean.cmake
.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/clean

plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/depend:
	cd /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/plugin/timersystemsdl /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl /home/emadbinabid/Documents/Research/RCSS/rcssserver3D/SimSpark/spark/build/plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugin/timersystemsdl/CMakeFiles/timersystemsdl.dir/depend

