# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/cmake/bin/cmake

# The command to remove a file.
RM = /opt/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/workspace/algorithm-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/workspace/algorithm-cpp/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/test_linkedlist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_linkedlist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_linkedlist.dir/flags.make

CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.o: CMakeFiles/test_linkedlist.dir/flags.make
CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.o: ../LinkedList/test_linkedlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/workspace/algorithm-cpp/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.o -c /mnt/d/workspace/algorithm-cpp/LinkedList/test_linkedlist.cpp

CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/workspace/algorithm-cpp/LinkedList/test_linkedlist.cpp > CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.i

CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/workspace/algorithm-cpp/LinkedList/test_linkedlist.cpp -o CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.s

CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.o: CMakeFiles/test_linkedlist.dir/flags.make
CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.o: ../LinkedList/LinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/workspace/algorithm-cpp/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.o -c /mnt/d/workspace/algorithm-cpp/LinkedList/LinkedList.cpp

CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/workspace/algorithm-cpp/LinkedList/LinkedList.cpp > CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.i

CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/workspace/algorithm-cpp/LinkedList/LinkedList.cpp -o CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.s

# Object files for target test_linkedlist
test_linkedlist_OBJECTS = \
"CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.o" \
"CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.o"

# External object files for target test_linkedlist
test_linkedlist_EXTERNAL_OBJECTS =

test_linkedlist: CMakeFiles/test_linkedlist.dir/LinkedList/test_linkedlist.cpp.o
test_linkedlist: CMakeFiles/test_linkedlist.dir/LinkedList/LinkedList.cpp.o
test_linkedlist: CMakeFiles/test_linkedlist.dir/build.make
test_linkedlist: /usr/lib/libgtest.a
test_linkedlist: /usr/lib/libgtest_main.a
test_linkedlist: CMakeFiles/test_linkedlist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/workspace/algorithm-cpp/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test_linkedlist"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_linkedlist.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_linkedlist.dir/build: test_linkedlist

.PHONY : CMakeFiles/test_linkedlist.dir/build

CMakeFiles/test_linkedlist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_linkedlist.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_linkedlist.dir/clean

CMakeFiles/test_linkedlist.dir/depend:
	cd /mnt/d/workspace/algorithm-cpp/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/workspace/algorithm-cpp /mnt/d/workspace/algorithm-cpp /mnt/d/workspace/algorithm-cpp/cmake-build-debug-wsl /mnt/d/workspace/algorithm-cpp/cmake-build-debug-wsl /mnt/d/workspace/algorithm-cpp/cmake-build-debug-wsl/CMakeFiles/test_linkedlist.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_linkedlist.dir/depend
