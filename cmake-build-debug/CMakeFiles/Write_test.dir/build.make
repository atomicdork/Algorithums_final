# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Programing\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programing\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Galen\Programming\C\Algorithums_final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Galen\Programming\C\Algorithums_final\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Write_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Write_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Write_test.dir/flags.make

CMakeFiles/Write_test.dir/Sources/write_in.c.obj: CMakeFiles/Write_test.dir/flags.make
CMakeFiles/Write_test.dir/Sources/write_in.c.obj: CMakeFiles/Write_test.dir/includes_C.rsp
CMakeFiles/Write_test.dir/Sources/write_in.c.obj: ../Sources/write_in.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Galen\Programming\C\Algorithums_final\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Write_test.dir/Sources/write_in.c.obj"
	D:\Programing\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Write_test.dir\Sources\write_in.c.obj   -c D:\Galen\Programming\C\Algorithums_final\Sources\write_in.c

CMakeFiles/Write_test.dir/Sources/write_in.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Write_test.dir/Sources/write_in.c.i"
	D:\Programing\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Galen\Programming\C\Algorithums_final\Sources\write_in.c > CMakeFiles\Write_test.dir\Sources\write_in.c.i

CMakeFiles/Write_test.dir/Sources/write_in.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Write_test.dir/Sources/write_in.c.s"
	D:\Programing\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Galen\Programming\C\Algorithums_final\Sources\write_in.c -o CMakeFiles\Write_test.dir\Sources\write_in.c.s

# Object files for target Write_test
Write_test_OBJECTS = \
"CMakeFiles/Write_test.dir/Sources/write_in.c.obj"

# External object files for target Write_test
Write_test_EXTERNAL_OBJECTS =

Write_test.exe: CMakeFiles/Write_test.dir/Sources/write_in.c.obj
Write_test.exe: CMakeFiles/Write_test.dir/build.make
Write_test.exe: CMakeFiles/Write_test.dir/linklibs.rsp
Write_test.exe: CMakeFiles/Write_test.dir/objects1.rsp
Write_test.exe: CMakeFiles/Write_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Galen\Programming\C\Algorithums_final\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Write_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Write_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Write_test.dir/build: Write_test.exe

.PHONY : CMakeFiles/Write_test.dir/build

CMakeFiles/Write_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Write_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Write_test.dir/clean

CMakeFiles/Write_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Galen\Programming\C\Algorithums_final D:\Galen\Programming\C\Algorithums_final D:\Galen\Programming\C\Algorithums_final\cmake-build-debug D:\Galen\Programming\C\Algorithums_final\cmake-build-debug D:\Galen\Programming\C\Algorithums_final\cmake-build-debug\CMakeFiles\Write_test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Write_test.dir/depend
