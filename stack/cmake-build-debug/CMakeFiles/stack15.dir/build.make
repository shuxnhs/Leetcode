# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shuxnhs/Documents/C++/stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shuxnhs/Documents/C++/stack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stack15.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack15.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack15.dir/flags.make

CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.o: CMakeFiles/stack15.dir/flags.make
CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.o: ../Binary\ Tree\ Levelorder\ traversal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.o -c "/home/shuxnhs/Documents/C++/stack/Binary Tree Levelorder traversal.cpp"

CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/shuxnhs/Documents/C++/stack/Binary Tree Levelorder traversal.cpp" > CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.i

CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/shuxnhs/Documents/C++/stack/Binary Tree Levelorder traversal.cpp" -o CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.s

# Object files for target stack15
stack15_OBJECTS = \
"CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.o"

# External object files for target stack15
stack15_EXTERNAL_OBJECTS =

stack15: CMakeFiles/stack15.dir/Binary_Tree_Levelorder_traversal.cpp.o
stack15: CMakeFiles/stack15.dir/build.make
stack15: CMakeFiles/stack15.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stack15"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack15.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack15.dir/build: stack15

.PHONY : CMakeFiles/stack15.dir/build

CMakeFiles/stack15.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack15.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack15.dir/clean

CMakeFiles/stack15.dir/depend:
	cd /home/shuxnhs/Documents/C++/stack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shuxnhs/Documents/C++/stack /home/shuxnhs/Documents/C++/stack /home/shuxnhs/Documents/C++/stack/cmake-build-debug /home/shuxnhs/Documents/C++/stack/cmake-build-debug /home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles/stack15.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack15.dir/depend

