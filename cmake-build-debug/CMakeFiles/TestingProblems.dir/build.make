# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "/Users/godchao/Library/Application Support/JetBrains/Toolbox/apps/CLion-Nova/ch-1/233.13871/CLion 2023.3 EAP.app/Contents/bin/cmake/mac/x64/bin/cmake"

# The command to remove a file.
RM = "/Users/godchao/Library/Application Support/JetBrains/Toolbox/apps/CLion-Nova/ch-1/233.13871/CLion 2023.3 EAP.app/Contents/bin/cmake/mac/x64/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/godchao/CLionProjects/TestingProblems

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/godchao/CLionProjects/TestingProblems/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TestingProblems.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TestingProblems.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TestingProblems.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestingProblems.dir/flags.make

CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o: CMakeFiles/TestingProblems.dir/flags.make
CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o: /Users/godchao/CLionProjects/TestingProblems/数组/46全排列.cpp
CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o: CMakeFiles/TestingProblems.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/godchao/CLionProjects/TestingProblems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o -MF CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o.d -o CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o -c /Users/godchao/CLionProjects/TestingProblems/数组/46全排列.cpp

CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/godchao/CLionProjects/TestingProblems/数组/46全排列.cpp > CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.i

CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/godchao/CLionProjects/TestingProblems/数组/46全排列.cpp -o CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.s

# Object files for target TestingProblems
TestingProblems_OBJECTS = \
"CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o"

# External object files for target TestingProblems
TestingProblems_EXTERNAL_OBJECTS =

TestingProblems: CMakeFiles/TestingProblems.dir/数组/46全排列.cpp.o
TestingProblems: CMakeFiles/TestingProblems.dir/build.make
TestingProblems: CMakeFiles/TestingProblems.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/godchao/CLionProjects/TestingProblems/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestingProblems"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestingProblems.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestingProblems.dir/build: TestingProblems
.PHONY : CMakeFiles/TestingProblems.dir/build

CMakeFiles/TestingProblems.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestingProblems.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestingProblems.dir/clean

CMakeFiles/TestingProblems.dir/depend:
	cd /Users/godchao/CLionProjects/TestingProblems/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/godchao/CLionProjects/TestingProblems /Users/godchao/CLionProjects/TestingProblems /Users/godchao/CLionProjects/TestingProblems/cmake-build-debug /Users/godchao/CLionProjects/TestingProblems/cmake-build-debug /Users/godchao/CLionProjects/TestingProblems/cmake-build-debug/CMakeFiles/TestingProblems.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TestingProblems.dir/depend

