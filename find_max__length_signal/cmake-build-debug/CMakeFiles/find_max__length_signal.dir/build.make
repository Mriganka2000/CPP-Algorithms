# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "E:\clion\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\clion\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\Clion Projects\find_max__length_signal"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Clion Projects\find_max__length_signal\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/find_max__length_signal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/find_max__length_signal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/find_max__length_signal.dir/flags.make

CMakeFiles/find_max__length_signal.dir/main.c.obj: CMakeFiles/find_max__length_signal.dir/flags.make
CMakeFiles/find_max__length_signal.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Clion Projects\find_max__length_signal\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/find_max__length_signal.dir/main.c.obj"
	F:\Msysys2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\find_max__length_signal.dir\main.c.obj -c "F:\Clion Projects\find_max__length_signal\main.c"

CMakeFiles/find_max__length_signal.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/find_max__length_signal.dir/main.c.i"
	F:\Msysys2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "F:\Clion Projects\find_max__length_signal\main.c" > CMakeFiles\find_max__length_signal.dir\main.c.i

CMakeFiles/find_max__length_signal.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/find_max__length_signal.dir/main.c.s"
	F:\Msysys2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "F:\Clion Projects\find_max__length_signal\main.c" -o CMakeFiles\find_max__length_signal.dir\main.c.s

# Object files for target find_max__length_signal
find_max__length_signal_OBJECTS = \
"CMakeFiles/find_max__length_signal.dir/main.c.obj"

# External object files for target find_max__length_signal
find_max__length_signal_EXTERNAL_OBJECTS =

find_max__length_signal.exe: CMakeFiles/find_max__length_signal.dir/main.c.obj
find_max__length_signal.exe: CMakeFiles/find_max__length_signal.dir/build.make
find_max__length_signal.exe: CMakeFiles/find_max__length_signal.dir/linklibs.rsp
find_max__length_signal.exe: CMakeFiles/find_max__length_signal.dir/objects1.rsp
find_max__length_signal.exe: CMakeFiles/find_max__length_signal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Clion Projects\find_max__length_signal\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable find_max__length_signal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\find_max__length_signal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/find_max__length_signal.dir/build: find_max__length_signal.exe

.PHONY : CMakeFiles/find_max__length_signal.dir/build

CMakeFiles/find_max__length_signal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\find_max__length_signal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/find_max__length_signal.dir/clean

CMakeFiles/find_max__length_signal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Clion Projects\find_max__length_signal" "F:\Clion Projects\find_max__length_signal" "F:\Clion Projects\find_max__length_signal\cmake-build-debug" "F:\Clion Projects\find_max__length_signal\cmake-build-debug" "F:\Clion Projects\find_max__length_signal\cmake-build-debug\CMakeFiles\find_max__length_signal.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/find_max__length_signal.dir/depend
