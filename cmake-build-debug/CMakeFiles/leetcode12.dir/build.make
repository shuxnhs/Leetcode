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
CMAKE_SOURCE_DIR = /home/shuxnhs/Documents/C++/leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shuxnhs/Documents/C++/leetcode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leetcode12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode12.dir/flags.make

CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.o: CMakeFiles/leetcode12.dir/flags.make
CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.o: ../Linked\ List/83-remove\ duplicates\ from\ sorted\ list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuxnhs/Documents/C++/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.o -c "/home/shuxnhs/Documents/C++/leetcode/Linked List/83-remove duplicates from sorted list.cpp"

CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/shuxnhs/Documents/C++/leetcode/Linked List/83-remove duplicates from sorted list.cpp" > CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.i

CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/shuxnhs/Documents/C++/leetcode/Linked List/83-remove duplicates from sorted list.cpp" -o CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.s

# Object files for target leetcode12
leetcode12_OBJECTS = \
"CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.o"

# External object files for target leetcode12
leetcode12_EXTERNAL_OBJECTS =

leetcode12: CMakeFiles/leetcode12.dir/Linked_List/83-remove_duplicates_from_sorted_list.cpp.o
leetcode12: CMakeFiles/leetcode12.dir/build.make
leetcode12: CMakeFiles/leetcode12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shuxnhs/Documents/C++/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leetcode12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode12.dir/build: leetcode12

.PHONY : CMakeFiles/leetcode12.dir/build

CMakeFiles/leetcode12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leetcode12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leetcode12.dir/clean

CMakeFiles/leetcode12.dir/depend:
	cd /home/shuxnhs/Documents/C++/leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shuxnhs/Documents/C++/leetcode /home/shuxnhs/Documents/C++/leetcode /home/shuxnhs/Documents/C++/leetcode/cmake-build-debug /home/shuxnhs/Documents/C++/leetcode/cmake-build-debug /home/shuxnhs/Documents/C++/leetcode/cmake-build-debug/CMakeFiles/leetcode12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode12.dir/depend

