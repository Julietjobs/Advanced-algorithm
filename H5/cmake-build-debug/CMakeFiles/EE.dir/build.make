# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/clion/164/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/164/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jobslinux/CLionProjects/H5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jobslinux/CLionProjects/H5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EE.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/EE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EE.dir/flags.make

CMakeFiles/EE.dir/EE.cpp.o: CMakeFiles/EE.dir/flags.make
CMakeFiles/EE.dir/EE.cpp.o: ../EE.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jobslinux/CLionProjects/H5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EE.dir/EE.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EE.dir/EE.cpp.o -c /home/jobslinux/CLionProjects/H5/EE.cpp

CMakeFiles/EE.dir/EE.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EE.dir/EE.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jobslinux/CLionProjects/H5/EE.cpp > CMakeFiles/EE.dir/EE.cpp.i

CMakeFiles/EE.dir/EE.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EE.dir/EE.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jobslinux/CLionProjects/H5/EE.cpp -o CMakeFiles/EE.dir/EE.cpp.s

# Object files for target EE
EE_OBJECTS = \
"CMakeFiles/EE.dir/EE.cpp.o"

# External object files for target EE
EE_EXTERNAL_OBJECTS =

EE: CMakeFiles/EE.dir/EE.cpp.o
EE: CMakeFiles/EE.dir/build.make
EE: CMakeFiles/EE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jobslinux/CLionProjects/H5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EE"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EE.dir/build: EE
.PHONY : CMakeFiles/EE.dir/build

CMakeFiles/EE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EE.dir/clean

CMakeFiles/EE.dir/depend:
	cd /home/jobslinux/CLionProjects/H5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jobslinux/CLionProjects/H5 /home/jobslinux/CLionProjects/H5 /home/jobslinux/CLionProjects/H5/cmake-build-debug /home/jobslinux/CLionProjects/H5/cmake-build-debug /home/jobslinux/CLionProjects/H5/cmake-build-debug/CMakeFiles/EE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EE.dir/depend
