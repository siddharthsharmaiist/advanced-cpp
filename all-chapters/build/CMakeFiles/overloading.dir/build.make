# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/build

# Include any dependencies generated for this target.
include CMakeFiles/overloading.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/overloading.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/overloading.dir/flags.make

CMakeFiles/overloading.dir/overloading.cpp.o: CMakeFiles/overloading.dir/flags.make
CMakeFiles/overloading.dir/overloading.cpp.o: ../overloading.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/overloading.dir/overloading.cpp.o"
	/bin/x86_64-linux-gnu-g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/overloading.dir/overloading.cpp.o -c /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/overloading.cpp

CMakeFiles/overloading.dir/overloading.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/overloading.dir/overloading.cpp.i"
	/bin/x86_64-linux-gnu-g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/overloading.cpp > CMakeFiles/overloading.dir/overloading.cpp.i

CMakeFiles/overloading.dir/overloading.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/overloading.dir/overloading.cpp.s"
	/bin/x86_64-linux-gnu-g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/overloading.cpp -o CMakeFiles/overloading.dir/overloading.cpp.s

# Object files for target overloading
overloading_OBJECTS = \
"CMakeFiles/overloading.dir/overloading.cpp.o"

# External object files for target overloading
overloading_EXTERNAL_OBJECTS =

overloading: CMakeFiles/overloading.dir/overloading.cpp.o
overloading: CMakeFiles/overloading.dir/build.make
overloading: CMakeFiles/overloading.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable overloading"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/overloading.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/overloading.dir/build: overloading

.PHONY : CMakeFiles/overloading.dir/build

CMakeFiles/overloading.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/overloading.dir/cmake_clean.cmake
.PHONY : CMakeFiles/overloading.dir/clean

CMakeFiles/overloading.dir/depend:
	cd /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/build /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/build /home/siddharth/Documents/learn/linkdin/advancedcpp/data-members/build/CMakeFiles/overloading.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/overloading.dir/depend

