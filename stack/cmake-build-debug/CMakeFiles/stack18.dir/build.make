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
include CMakeFiles/stack18.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack18.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack18.dir/flags.make

CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.o: CMakeFiles/stack18.dir/flags.make
CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.o: ../856-Score\ of\ Parentheses.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.o -c "/home/shuxnhs/Documents/C++/stack/856-Score of Parentheses.cpp"

CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/shuxnhs/Documents/C++/stack/856-Score of Parentheses.cpp" > CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.i

CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/shuxnhs/Documents/C++/stack/856-Score of Parentheses.cpp" -o CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.s

# Object files for target stack18
stack18_OBJECTS = \
"CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.o"

# External object files for target stack18
stack18_EXTERNAL_OBJECTS =

stack18: CMakeFiles/stack18.dir/856-Score_of_Parentheses.cpp.o
stack18: CMakeFiles/stack18.dir/build.make
stack18: CMakeFiles/stack18.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stack18"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack18.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack18.dir/build: stack18

.PHONY : CMakeFiles/stack18.dir/build

CMakeFiles/stack18.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack18.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack18.dir/clean

CMakeFiles/stack18.dir/depend:
	cd /home/shuxnhs/Documents/C++/stack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shuxnhs/Documents/C++/stack /home/shuxnhs/Documents/C++/stack /home/shuxnhs/Documents/C++/stack/cmake-build-debug /home/shuxnhs/Documents/C++/stack/cmake-build-debug /home/shuxnhs/Documents/C++/stack/cmake-build-debug/CMakeFiles/stack18.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack18.dir/depend

