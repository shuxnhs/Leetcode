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
CMAKE_SOURCE_DIR = /home/shuxnhs/Documents/C++/Leetcode/tree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tree7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tree7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tree7.dir/flags.make

CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.o: CMakeFiles/tree7.dir/flags.make
CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.o: ../563-Binary\ Tree\ Tilt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.o -c "/home/shuxnhs/Documents/C++/Leetcode/tree/563-Binary Tree Tilt.cpp"

CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/shuxnhs/Documents/C++/Leetcode/tree/563-Binary Tree Tilt.cpp" > CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.i

CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/shuxnhs/Documents/C++/Leetcode/tree/563-Binary Tree Tilt.cpp" -o CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.s

# Object files for target tree7
tree7_OBJECTS = \
"CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.o"

# External object files for target tree7
tree7_EXTERNAL_OBJECTS =

tree7: CMakeFiles/tree7.dir/563-Binary_Tree_Tilt.cpp.o
tree7: CMakeFiles/tree7.dir/build.make
tree7: CMakeFiles/tree7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tree7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tree7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tree7.dir/build: tree7

.PHONY : CMakeFiles/tree7.dir/build

CMakeFiles/tree7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tree7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tree7.dir/clean

CMakeFiles/tree7.dir/depend:
	cd /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shuxnhs/Documents/C++/Leetcode/tree /home/shuxnhs/Documents/C++/Leetcode/tree /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug/CMakeFiles/tree7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tree7.dir/depend

