# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/cmake-3.31.3-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.31.3-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/Klaus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/Klaus/build

# Include any dependencies generated for this target.
include CMakeFiles/devgroup.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/devgroup.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/devgroup.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/devgroup.dir/flags.make

CMakeFiles/devgroup.dir/codegen:
.PHONY : CMakeFiles/devgroup.dir/codegen

CMakeFiles/devgroup.dir/src/developer.c.o: CMakeFiles/devgroup.dir/flags.make
CMakeFiles/devgroup.dir/src/developer.c.o: /workspaces/Klaus/src/developer.c
CMakeFiles/devgroup.dir/src/developer.c.o: CMakeFiles/devgroup.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/workspaces/Klaus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/devgroup.dir/src/developer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/devgroup.dir/src/developer.c.o -MF CMakeFiles/devgroup.dir/src/developer.c.o.d -o CMakeFiles/devgroup.dir/src/developer.c.o -c /workspaces/Klaus/src/developer.c

CMakeFiles/devgroup.dir/src/developer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/devgroup.dir/src/developer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /workspaces/Klaus/src/developer.c > CMakeFiles/devgroup.dir/src/developer.c.i

CMakeFiles/devgroup.dir/src/developer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/devgroup.dir/src/developer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /workspaces/Klaus/src/developer.c -o CMakeFiles/devgroup.dir/src/developer.c.s

CMakeFiles/devgroup.dir/src/developer_group.c.o: CMakeFiles/devgroup.dir/flags.make
CMakeFiles/devgroup.dir/src/developer_group.c.o: /workspaces/Klaus/src/developer_group.c
CMakeFiles/devgroup.dir/src/developer_group.c.o: CMakeFiles/devgroup.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/workspaces/Klaus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/devgroup.dir/src/developer_group.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/devgroup.dir/src/developer_group.c.o -MF CMakeFiles/devgroup.dir/src/developer_group.c.o.d -o CMakeFiles/devgroup.dir/src/developer_group.c.o -c /workspaces/Klaus/src/developer_group.c

CMakeFiles/devgroup.dir/src/developer_group.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/devgroup.dir/src/developer_group.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /workspaces/Klaus/src/developer_group.c > CMakeFiles/devgroup.dir/src/developer_group.c.i

CMakeFiles/devgroup.dir/src/developer_group.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/devgroup.dir/src/developer_group.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /workspaces/Klaus/src/developer_group.c -o CMakeFiles/devgroup.dir/src/developer_group.c.s

# Object files for target devgroup
devgroup_OBJECTS = \
"CMakeFiles/devgroup.dir/src/developer.c.o" \
"CMakeFiles/devgroup.dir/src/developer_group.c.o"

# External object files for target devgroup
devgroup_EXTERNAL_OBJECTS =

libdevgroup.a: CMakeFiles/devgroup.dir/src/developer.c.o
libdevgroup.a: CMakeFiles/devgroup.dir/src/developer_group.c.o
libdevgroup.a: CMakeFiles/devgroup.dir/build.make
libdevgroup.a: CMakeFiles/devgroup.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/workspaces/Klaus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libdevgroup.a"
	$(CMAKE_COMMAND) -P CMakeFiles/devgroup.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/devgroup.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/devgroup.dir/build: libdevgroup.a
.PHONY : CMakeFiles/devgroup.dir/build

CMakeFiles/devgroup.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/devgroup.dir/cmake_clean.cmake
.PHONY : CMakeFiles/devgroup.dir/clean

CMakeFiles/devgroup.dir/depend:
	cd /workspaces/Klaus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/Klaus /workspaces/Klaus /workspaces/Klaus/build /workspaces/Klaus/build /workspaces/Klaus/build/CMakeFiles/devgroup.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/devgroup.dir/depend

