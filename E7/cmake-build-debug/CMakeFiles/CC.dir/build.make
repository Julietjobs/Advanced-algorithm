# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CC.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/CC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CC.dir/flags.make

CMakeFiles/CC.dir/CC.cpp.obj: CMakeFiles/CC.dir/flags.make
CMakeFiles/CC.dir/CC.cpp.obj: ../CC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CC.dir/CC.cpp.obj"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CC.dir\CC.cpp.obj -c C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\CC.cpp

CMakeFiles/CC.dir/CC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CC.dir/CC.cpp.i"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\CC.cpp > CMakeFiles\CC.dir\CC.cpp.i

CMakeFiles/CC.dir/CC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CC.dir/CC.cpp.s"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\CC.cpp -o CMakeFiles\CC.dir\CC.cpp.s

# Object files for target CC
CC_OBJECTS = \
"CMakeFiles/CC.dir/CC.cpp.obj"

# External object files for target CC
CC_EXTERNAL_OBJECTS =

CC.exe: CMakeFiles/CC.dir/CC.cpp.obj
CC.exe: CMakeFiles/CC.dir/build.make
CC.exe: CMakeFiles/CC.dir/linklibs.rsp
CC.exe: CMakeFiles/CC.dir/objects1.rsp
CC.exe: CMakeFiles/CC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CC.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CC.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CC.dir/build: CC.exe
.PHONY : CMakeFiles/CC.dir/build

CMakeFiles/CC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CC.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CC.dir/clean

CMakeFiles/CC.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7 C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7 C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\cmake-build-debug C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\cmake-build-debug C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\E7\cmake-build-debug\CMakeFiles\CC.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CC.dir/depend
