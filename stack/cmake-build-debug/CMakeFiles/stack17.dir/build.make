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
include CMakeFiles/stack17.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack17.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack17.dir/flags.make

CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.o: CMakeFiles/stack17.dir/flags.make
CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.o: ../150-Evaluate\ Reverse\ Polish\ Notation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.o -c "/home/shuxnhs/Documents/C++/stack/150-Evaluate Reverse Polish Notation.cpp"

CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/shuxnhs/Documents/C++/stack/150-Evaluate Reverse Polish Notation.cpp" > CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.i

CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/shuxnhs/Documents/C++/stack/150-Evaluate Reverse Polish Notation.cpp" -o CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.s

# Object files for target stack17
stack17_OBJECTS = \
"CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.o"

# External object files for target stack17
stack17_EXTERNAL_OBJECTS =

stack17: CMakeFiles/stack17.dir/150-Evaluate_Reverse_Polish_Notation.cpp.o
stack17: CMakeFiles/stack17.dir/build.make
stack17: CMakeFiles/stack17.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stack17"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack17.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack17.dir/build: stack17

.PHONY : CMakeFiles/stack17.dir/build

CMakeFiles/stack17.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack17.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack17.dir/clean

CMakeFiles/stack17.dir/depend:
	cd /home/shuxnhs/Documents/C++/stack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shuxnhs/Documents/C++/stack /home/shuxnhs/Documents/C++/stack /home/shuxnhs/Documents/C++/stack/cmake-build-debug /home/shuxnhs/Documents/C++/stack/cmake-build-debug /home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles/stack17.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack17.dir/depend

