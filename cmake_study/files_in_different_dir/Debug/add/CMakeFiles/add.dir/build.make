# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/misc/cmake_study/files_in_different_dir

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/misc/cmake_study/files_in_different_dir/Debug

# Include any dependencies generated for this target.
include add/CMakeFiles/add.dir/depend.make

# Include the progress variables for this target.
include add/CMakeFiles/add.dir/progress.make

# Include the compile flags for this target's objects.
include add/CMakeFiles/add.dir/flags.make

add/CMakeFiles/add.dir/add.c.o: add/CMakeFiles/add.dir/flags.make
add/CMakeFiles/add.dir/add.c.o: ../add/add.c
	$(CMAKE_COMMAND) -E cmake_progress_report /root/misc/cmake_study/files_in_different_dir/Debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object add/CMakeFiles/add.dir/add.c.o"
	cd /root/misc/cmake_study/files_in_different_dir/Debug/add && /bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/add.dir/add.c.o   -c /root/misc/cmake_study/files_in_different_dir/add/add.c

add/CMakeFiles/add.dir/add.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/add.dir/add.c.i"
	cd /root/misc/cmake_study/files_in_different_dir/Debug/add && /bin/cc  $(C_DEFINES) $(C_FLAGS) -E /root/misc/cmake_study/files_in_different_dir/add/add.c > CMakeFiles/add.dir/add.c.i

add/CMakeFiles/add.dir/add.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/add.dir/add.c.s"
	cd /root/misc/cmake_study/files_in_different_dir/Debug/add && /bin/cc  $(C_DEFINES) $(C_FLAGS) -S /root/misc/cmake_study/files_in_different_dir/add/add.c -o CMakeFiles/add.dir/add.c.s

add/CMakeFiles/add.dir/add.c.o.requires:
.PHONY : add/CMakeFiles/add.dir/add.c.o.requires

add/CMakeFiles/add.dir/add.c.o.provides: add/CMakeFiles/add.dir/add.c.o.requires
	$(MAKE) -f add/CMakeFiles/add.dir/build.make add/CMakeFiles/add.dir/add.c.o.provides.build
.PHONY : add/CMakeFiles/add.dir/add.c.o.provides

add/CMakeFiles/add.dir/add.c.o.provides.build: add/CMakeFiles/add.dir/add.c.o

# Object files for target add
add_OBJECTS = \
"CMakeFiles/add.dir/add.c.o"

# External object files for target add
add_EXTERNAL_OBJECTS =

add/libadd.a: add/CMakeFiles/add.dir/add.c.o
add/libadd.a: add/CMakeFiles/add.dir/build.make
add/libadd.a: add/CMakeFiles/add.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libadd.a"
	cd /root/misc/cmake_study/files_in_different_dir/Debug/add && $(CMAKE_COMMAND) -P CMakeFiles/add.dir/cmake_clean_target.cmake
	cd /root/misc/cmake_study/files_in_different_dir/Debug/add && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/add.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
add/CMakeFiles/add.dir/build: add/libadd.a
.PHONY : add/CMakeFiles/add.dir/build

add/CMakeFiles/add.dir/requires: add/CMakeFiles/add.dir/add.c.o.requires
.PHONY : add/CMakeFiles/add.dir/requires

add/CMakeFiles/add.dir/clean:
	cd /root/misc/cmake_study/files_in_different_dir/Debug/add && $(CMAKE_COMMAND) -P CMakeFiles/add.dir/cmake_clean.cmake
.PHONY : add/CMakeFiles/add.dir/clean

add/CMakeFiles/add.dir/depend:
	cd /root/misc/cmake_study/files_in_different_dir/Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/misc/cmake_study/files_in_different_dir /root/misc/cmake_study/files_in_different_dir/add /root/misc/cmake_study/files_in_different_dir/Debug /root/misc/cmake_study/files_in_different_dir/Debug/add /root/misc/cmake_study/files_in_different_dir/Debug/add/CMakeFiles/add.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : add/CMakeFiles/add.dir/depend

