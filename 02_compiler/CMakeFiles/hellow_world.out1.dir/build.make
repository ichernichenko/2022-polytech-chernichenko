# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.24.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.24.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler

# Include any dependencies generated for this target.
include CMakeFiles/hellow_world.out1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hellow_world.out1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hellow_world.out1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hellow_world.out1.dir/flags.make

CMakeFiles/hellow_world.out1.dir/func.cpp.o: CMakeFiles/hellow_world.out1.dir/flags.make
CMakeFiles/hellow_world.out1.dir/func.cpp.o: func.cpp
CMakeFiles/hellow_world.out1.dir/func.cpp.o: CMakeFiles/hellow_world.out1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hellow_world.out1.dir/func.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hellow_world.out1.dir/func.cpp.o -MF CMakeFiles/hellow_world.out1.dir/func.cpp.o.d -o CMakeFiles/hellow_world.out1.dir/func.cpp.o -c /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/func.cpp

CMakeFiles/hellow_world.out1.dir/func.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hellow_world.out1.dir/func.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/func.cpp > CMakeFiles/hellow_world.out1.dir/func.cpp.i

CMakeFiles/hellow_world.out1.dir/func.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hellow_world.out1.dir/func.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/func.cpp -o CMakeFiles/hellow_world.out1.dir/func.cpp.s

CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o: CMakeFiles/hellow_world.out1.dir/flags.make
CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o: hellow_world.cpp
CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o: CMakeFiles/hellow_world.out1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o -MF CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o.d -o CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o -c /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/hellow_world.cpp

CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/hellow_world.cpp > CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.i

CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/hellow_world.cpp -o CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.s

# Object files for target hellow_world.out1
hellow_world_out1_OBJECTS = \
"CMakeFiles/hellow_world.out1.dir/func.cpp.o" \
"CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o"

# External object files for target hellow_world.out1
hellow_world_out1_EXTERNAL_OBJECTS =

hellow_world.out1: CMakeFiles/hellow_world.out1.dir/func.cpp.o
hellow_world.out1: CMakeFiles/hellow_world.out1.dir/hellow_world.cpp.o
hellow_world.out1: CMakeFiles/hellow_world.out1.dir/build.make
hellow_world.out1: CMakeFiles/hellow_world.out1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hellow_world.out1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hellow_world.out1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hellow_world.out1.dir/build: hellow_world.out1
.PHONY : CMakeFiles/hellow_world.out1.dir/build

CMakeFiles/hellow_world.out1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hellow_world.out1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hellow_world.out1.dir/clean

CMakeFiles/hellow_world.out1.dir/depend:
	cd /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler /Users/ilia.chernichenko/Documents/GitRepositories/2022-polytech-chernichenko/02_compiler/CMakeFiles/hellow_world.out1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hellow_world.out1.dir/depend
