# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/valentiay/clion-2017.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/valentiay/clion-2017.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/valentiay/programming/Javorski

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/valentiay/programming/Javorski/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/JavoLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/JavoLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/JavoLib.dir/flags.make

CMakeFiles/JavoLib.dir/src/World.cpp.o: CMakeFiles/JavoLib.dir/flags.make
CMakeFiles/JavoLib.dir/src/World.cpp.o: ../src/World.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/valentiay/programming/Javorski/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/JavoLib.dir/src/World.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JavoLib.dir/src/World.cpp.o -c /home/valentiay/programming/Javorski/src/World.cpp

CMakeFiles/JavoLib.dir/src/World.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JavoLib.dir/src/World.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/valentiay/programming/Javorski/src/World.cpp > CMakeFiles/JavoLib.dir/src/World.cpp.i

CMakeFiles/JavoLib.dir/src/World.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JavoLib.dir/src/World.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/valentiay/programming/Javorski/src/World.cpp -o CMakeFiles/JavoLib.dir/src/World.cpp.s

CMakeFiles/JavoLib.dir/src/World.cpp.o.requires:

.PHONY : CMakeFiles/JavoLib.dir/src/World.cpp.o.requires

CMakeFiles/JavoLib.dir/src/World.cpp.o.provides: CMakeFiles/JavoLib.dir/src/World.cpp.o.requires
	$(MAKE) -f CMakeFiles/JavoLib.dir/build.make CMakeFiles/JavoLib.dir/src/World.cpp.o.provides.build
.PHONY : CMakeFiles/JavoLib.dir/src/World.cpp.o.provides

CMakeFiles/JavoLib.dir/src/World.cpp.o.provides.build: CMakeFiles/JavoLib.dir/src/World.cpp.o


CMakeFiles/JavoLib.dir/src/Game.cpp.o: CMakeFiles/JavoLib.dir/flags.make
CMakeFiles/JavoLib.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/valentiay/programming/Javorski/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/JavoLib.dir/src/Game.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JavoLib.dir/src/Game.cpp.o -c /home/valentiay/programming/Javorski/src/Game.cpp

CMakeFiles/JavoLib.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JavoLib.dir/src/Game.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/valentiay/programming/Javorski/src/Game.cpp > CMakeFiles/JavoLib.dir/src/Game.cpp.i

CMakeFiles/JavoLib.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JavoLib.dir/src/Game.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/valentiay/programming/Javorski/src/Game.cpp -o CMakeFiles/JavoLib.dir/src/Game.cpp.s

CMakeFiles/JavoLib.dir/src/Game.cpp.o.requires:

.PHONY : CMakeFiles/JavoLib.dir/src/Game.cpp.o.requires

CMakeFiles/JavoLib.dir/src/Game.cpp.o.provides: CMakeFiles/JavoLib.dir/src/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/JavoLib.dir/build.make CMakeFiles/JavoLib.dir/src/Game.cpp.o.provides.build
.PHONY : CMakeFiles/JavoLib.dir/src/Game.cpp.o.provides

CMakeFiles/JavoLib.dir/src/Game.cpp.o.provides.build: CMakeFiles/JavoLib.dir/src/Game.cpp.o


CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o: CMakeFiles/JavoLib.dir/flags.make
CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o: ../src/SceneGraph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/valentiay/programming/Javorski/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o -c /home/valentiay/programming/Javorski/src/SceneGraph.cpp

CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/valentiay/programming/Javorski/src/SceneGraph.cpp > CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.i

CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/valentiay/programming/Javorski/src/SceneGraph.cpp -o CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.s

CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o.requires:

.PHONY : CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o.requires

CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o.provides: CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o.requires
	$(MAKE) -f CMakeFiles/JavoLib.dir/build.make CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o.provides.build
.PHONY : CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o.provides

CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o.provides.build: CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o


# Object files for target JavoLib
JavoLib_OBJECTS = \
"CMakeFiles/JavoLib.dir/src/World.cpp.o" \
"CMakeFiles/JavoLib.dir/src/Game.cpp.o" \
"CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o"

# External object files for target JavoLib
JavoLib_EXTERNAL_OBJECTS =

libJavoLib.a: CMakeFiles/JavoLib.dir/src/World.cpp.o
libJavoLib.a: CMakeFiles/JavoLib.dir/src/Game.cpp.o
libJavoLib.a: CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o
libJavoLib.a: CMakeFiles/JavoLib.dir/build.make
libJavoLib.a: CMakeFiles/JavoLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/valentiay/programming/Javorski/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libJavoLib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/JavoLib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JavoLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/JavoLib.dir/build: libJavoLib.a

.PHONY : CMakeFiles/JavoLib.dir/build

CMakeFiles/JavoLib.dir/requires: CMakeFiles/JavoLib.dir/src/World.cpp.o.requires
CMakeFiles/JavoLib.dir/requires: CMakeFiles/JavoLib.dir/src/Game.cpp.o.requires
CMakeFiles/JavoLib.dir/requires: CMakeFiles/JavoLib.dir/src/SceneGraph.cpp.o.requires

.PHONY : CMakeFiles/JavoLib.dir/requires

CMakeFiles/JavoLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/JavoLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/JavoLib.dir/clean

CMakeFiles/JavoLib.dir/depend:
	cd /home/valentiay/programming/Javorski/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/valentiay/programming/Javorski /home/valentiay/programming/Javorski /home/valentiay/programming/Javorski/cmake-build-debug /home/valentiay/programming/Javorski/cmake-build-debug /home/valentiay/programming/Javorski/cmake-build-debug/CMakeFiles/JavoLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/JavoLib.dir/depend
