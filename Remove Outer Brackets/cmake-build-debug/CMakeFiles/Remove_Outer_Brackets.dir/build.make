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
CMAKE_COMMAND = "E:\clion\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\clion\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\Clion Projects\Remove Outer Brackets"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Clion Projects\Remove Outer Brackets\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Remove_Outer_Brackets.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Remove_Outer_Brackets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Remove_Outer_Brackets.dir/flags.make

CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.obj: CMakeFiles/Remove_Outer_Brackets.dir/flags.make
CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Clion Projects\Remove Outer Brackets\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.obj"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Remove_Outer_Brackets.dir\main.cpp.obj -c "F:\Clion Projects\Remove Outer Brackets\main.cpp"

CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.i"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Clion Projects\Remove Outer Brackets\main.cpp" > CMakeFiles\Remove_Outer_Brackets.dir\main.cpp.i

CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.s"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Clion Projects\Remove Outer Brackets\main.cpp" -o CMakeFiles\Remove_Outer_Brackets.dir\main.cpp.s

# Object files for target Remove_Outer_Brackets
Remove_Outer_Brackets_OBJECTS = \
"CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.obj"

# External object files for target Remove_Outer_Brackets
Remove_Outer_Brackets_EXTERNAL_OBJECTS =

Remove_Outer_Brackets.exe: CMakeFiles/Remove_Outer_Brackets.dir/main.cpp.obj
Remove_Outer_Brackets.exe: CMakeFiles/Remove_Outer_Brackets.dir/build.make
Remove_Outer_Brackets.exe: CMakeFiles/Remove_Outer_Brackets.dir/linklibs.rsp
Remove_Outer_Brackets.exe: CMakeFiles/Remove_Outer_Brackets.dir/objects1.rsp
Remove_Outer_Brackets.exe: CMakeFiles/Remove_Outer_Brackets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Clion Projects\Remove Outer Brackets\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Remove_Outer_Brackets.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Remove_Outer_Brackets.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Remove_Outer_Brackets.dir/build: Remove_Outer_Brackets.exe
.PHONY : CMakeFiles/Remove_Outer_Brackets.dir/build

CMakeFiles/Remove_Outer_Brackets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Remove_Outer_Brackets.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Remove_Outer_Brackets.dir/clean

CMakeFiles/Remove_Outer_Brackets.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Clion Projects\Remove Outer Brackets" "F:\Clion Projects\Remove Outer Brackets" "F:\Clion Projects\Remove Outer Brackets\cmake-build-debug" "F:\Clion Projects\Remove Outer Brackets\cmake-build-debug" "F:\Clion Projects\Remove Outer Brackets\cmake-build-debug\CMakeFiles\Remove_Outer_Brackets.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Remove_Outer_Brackets.dir/depend

