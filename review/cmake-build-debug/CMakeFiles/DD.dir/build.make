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
CMAKE_SOURCE_DIR = C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DD.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/DD.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DD.dir/flags.make

CMakeFiles/DD.dir/DD.cpp.obj: CMakeFiles/DD.dir/flags.make
CMakeFiles/DD.dir/DD.cpp.obj: ../DD.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DD.dir/DD.cpp.obj"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DD.dir\DD.cpp.obj -c C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\DD.cpp

CMakeFiles/DD.dir/DD.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DD.dir/DD.cpp.i"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\DD.cpp > CMakeFiles\DD.dir\DD.cpp.i

CMakeFiles/DD.dir/DD.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DD.dir/DD.cpp.s"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\DD.cpp -o CMakeFiles\DD.dir\DD.cpp.s

# Object files for target DD
DD_OBJECTS = \
"CMakeFiles/DD.dir/DD.cpp.obj"

# External object files for target DD
DD_EXTERNAL_OBJECTS =

DD.exe: CMakeFiles/DD.dir/DD.cpp.obj
DD.exe: CMakeFiles/DD.dir/build.make
DD.exe: CMakeFiles/DD.dir/linklibs.rsp
DD.exe: CMakeFiles/DD.dir/objects1.rsp
DD.exe: CMakeFiles/DD.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DD.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DD.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DD.dir/build: DD.exe
.PHONY : CMakeFiles/DD.dir/build

CMakeFiles/DD.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DD.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DD.dir/clean

CMakeFiles/DD.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug\CMakeFiles\DD.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DD.dir/depend

