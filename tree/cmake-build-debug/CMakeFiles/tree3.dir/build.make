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
include CMakeFiles/tree3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tree3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tree3.dir/flags.make

CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.o: CMakeFiles/tree3.dir/flags.make
CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.o: ../111-Minimum\ Depth\ of\ Binary\ Tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.o -c "/home/shuxnhs/Documents/C++/Leetcode/tree/111-Minimum Depth of Binary Tree.cpp"

CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/shuxnhs/Documents/C++/Leetcode/tree/111-Minimum Depth of Binary Tree.cpp" > CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.i

CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/shuxnhs/Documents/C++/Leetcode/tree/111-Minimum Depth of Binary Tree.cpp" -o CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.s

# Object files for target tree3
tree3_OBJECTS = \
"CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.o"

# External object files for target tree3
tree3_EXTERNAL_OBJECTS =

tree3: CMakeFiles/tree3.dir/111-Minimum_Depth_of_Binary_Tree.cpp.o
tree3: CMakeFiles/tree3.dir/build.make
tree3: CMakeFiles/tree3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tree3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tree3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tree3.dir/build: tree3

.PHONY : CMakeFiles/tree3.dir/build

CMakeFiles/tree3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tree3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tree3.dir/clean

CMakeFiles/tree3.dir/depend:
	cd /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shuxnhs/Documents/C++/Leetcode/tree /home/shuxnhs/Documents/C++/Leetcode/tree /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug /home/shuxnhs/Documents/C++/Leetcode/tree/cmake-build-debug/CMakeFiles/tree3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tree3.dir/depend

