# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Users/Yan/Qt/Tools/CMake/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Users/Yan/Qt/Tools/CMake/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2

# Include any dependencies generated for this target.
include CMakeFiles/fly.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/fly.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/fly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fly.dir/flags.make

CMakeFiles/fly.dir/Bird.cpp.o: CMakeFiles/fly.dir/flags.make
CMakeFiles/fly.dir/Bird.cpp.o: Bird.cpp
CMakeFiles/fly.dir/Bird.cpp.o: CMakeFiles/fly.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fly.dir/Bird.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fly.dir/Bird.cpp.o -MF CMakeFiles/fly.dir/Bird.cpp.o.d -o CMakeFiles/fly.dir/Bird.cpp.o -c /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/Bird.cpp

CMakeFiles/fly.dir/Bird.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fly.dir/Bird.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/Bird.cpp > CMakeFiles/fly.dir/Bird.cpp.i

CMakeFiles/fly.dir/Bird.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fly.dir/Bird.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/Bird.cpp -o CMakeFiles/fly.dir/Bird.cpp.s

CMakeFiles/fly.dir/Plane.cpp.o: CMakeFiles/fly.dir/flags.make
CMakeFiles/fly.dir/Plane.cpp.o: Plane.cpp
CMakeFiles/fly.dir/Plane.cpp.o: CMakeFiles/fly.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fly.dir/Plane.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fly.dir/Plane.cpp.o -MF CMakeFiles/fly.dir/Plane.cpp.o.d -o CMakeFiles/fly.dir/Plane.cpp.o -c /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/Plane.cpp

CMakeFiles/fly.dir/Plane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fly.dir/Plane.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/Plane.cpp > CMakeFiles/fly.dir/Plane.cpp.i

CMakeFiles/fly.dir/Plane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fly.dir/Plane.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/Plane.cpp -o CMakeFiles/fly.dir/Plane.cpp.s

CMakeFiles/fly.dir/main.cpp.o: CMakeFiles/fly.dir/flags.make
CMakeFiles/fly.dir/main.cpp.o: main.cpp
CMakeFiles/fly.dir/main.cpp.o: CMakeFiles/fly.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/fly.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fly.dir/main.cpp.o -MF CMakeFiles/fly.dir/main.cpp.o.d -o CMakeFiles/fly.dir/main.cpp.o -c /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/main.cpp

CMakeFiles/fly.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fly.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/main.cpp > CMakeFiles/fly.dir/main.cpp.i

CMakeFiles/fly.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fly.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/main.cpp -o CMakeFiles/fly.dir/main.cpp.s

# Object files for target fly
fly_OBJECTS = \
"CMakeFiles/fly.dir/Bird.cpp.o" \
"CMakeFiles/fly.dir/Plane.cpp.o" \
"CMakeFiles/fly.dir/main.cpp.o"

# External object files for target fly
fly_EXTERNAL_OBJECTS =

fly: CMakeFiles/fly.dir/Bird.cpp.o
fly: CMakeFiles/fly.dir/Plane.cpp.o
fly: CMakeFiles/fly.dir/main.cpp.o
fly: CMakeFiles/fly.dir/build.make
fly: CMakeFiles/fly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable fly"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fly.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fly.dir/build: fly
.PHONY : CMakeFiles/fly.dir/build

CMakeFiles/fly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fly.dir/clean

CMakeFiles/fly.dir/depend:
	cd /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2 /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2 /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2 /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2 /Users/Yan/Project/practice/online-course/南方科技大学C++课程-于仕琪/课后练习/week5/cmake2/CMakeFiles/fly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fly.dir/depend

