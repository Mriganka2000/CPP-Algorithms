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
CMAKE_COMMAND = "E:\clion\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\clion\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\Clion Projects\Inverted Hollow Pyramid IBM"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Clion Projects\Inverted Hollow Pyramid IBM\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/flags.make

CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.obj: CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/flags.make
CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Clion Projects\Inverted Hollow Pyramid IBM\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.obj"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Inverted_Hollow_Pyramid_IBM.dir\main.cpp.obj -c "F:\Clion Projects\Inverted Hollow Pyramid IBM\main.cpp"

CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.i"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Clion Projects\Inverted Hollow Pyramid IBM\main.cpp" > CMakeFiles\Inverted_Hollow_Pyramid_IBM.dir\main.cpp.i

CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.s"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Clion Projects\Inverted Hollow Pyramid IBM\main.cpp" -o CMakeFiles\Inverted_Hollow_Pyramid_IBM.dir\main.cpp.s

# Object files for target Inverted_Hollow_Pyramid_IBM
Inverted_Hollow_Pyramid_IBM_OBJECTS = \
"CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.obj"

# External object files for target Inverted_Hollow_Pyramid_IBM
Inverted_Hollow_Pyramid_IBM_EXTERNAL_OBJECTS =

Inverted_Hollow_Pyramid_IBM.exe: CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/main.cpp.obj
Inverted_Hollow_Pyramid_IBM.exe: CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/build.make
Inverted_Hollow_Pyramid_IBM.exe: CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/linklibs.rsp
Inverted_Hollow_Pyramid_IBM.exe: CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/objects1.rsp
Inverted_Hollow_Pyramid_IBM.exe: CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Clion Projects\Inverted Hollow Pyramid IBM\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Inverted_Hollow_Pyramid_IBM.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Inverted_Hollow_Pyramid_IBM.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/build: Inverted_Hollow_Pyramid_IBM.exe
.PHONY : CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/build

CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Inverted_Hollow_Pyramid_IBM.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/clean

CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Clion Projects\Inverted Hollow Pyramid IBM" "F:\Clion Projects\Inverted Hollow Pyramid IBM" "F:\Clion Projects\Inverted Hollow Pyramid IBM\cmake-build-debug" "F:\Clion Projects\Inverted Hollow Pyramid IBM\cmake-build-debug" "F:\Clion Projects\Inverted Hollow Pyramid IBM\cmake-build-debug\CMakeFiles\Inverted_Hollow_Pyramid_IBM.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Inverted_Hollow_Pyramid_IBM.dir/depend

