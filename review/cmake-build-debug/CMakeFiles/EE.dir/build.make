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
include CMakeFiles/EE.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/EE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EE.dir/flags.make

CMakeFiles/EE.dir/EE.cpp.obj: CMakeFiles/EE.dir/flags.make
CMakeFiles/EE.dir/EE.cpp.obj: ../EE.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EE.dir/EE.cpp.obj"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\EE.dir\EE.cpp.obj -c C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\EE.cpp

CMakeFiles/EE.dir/EE.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EE.dir/EE.cpp.i"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\EE.cpp > CMakeFiles\EE.dir\EE.cpp.i

CMakeFiles/EE.dir/EE.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EE.dir/EE.cpp.s"
	D:\mingw\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\EE.cpp -o CMakeFiles\EE.dir\EE.cpp.s

# Object files for target EE
EE_OBJECTS = \
"CMakeFiles/EE.dir/EE.cpp.obj"

# External object files for target EE
EE_EXTERNAL_OBJECTS =

EE.exe: CMakeFiles/EE.dir/EE.cpp.obj
EE.exe: CMakeFiles/EE.dir/build.make
EE.exe: CMakeFiles/EE.dir/linklibs.rsp
EE.exe: CMakeFiles/EE.dir/objects1.rsp
EE.exe: CMakeFiles/EE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EE.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EE.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EE.dir/build: EE.exe
.PHONY : CMakeFiles/EE.dir/build

CMakeFiles/EE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EE.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EE.dir/clean

CMakeFiles/EE.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug C:\Users\Jobs\Documents\CLionProjects\Advanced-algorithm\review\cmake-build-debug\CMakeFiles\EE.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EE.dir/depend

