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
CMAKE_COMMAND = "E:\clion\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\clion\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\Clion Projects\Berland Music CodeFoeces"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Clion Projects\Berland Music CodeFoeces\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Berland_Music_CodeFoeces.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Berland_Music_CodeFoeces.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Berland_Music_CodeFoeces.dir/flags.make

CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.obj: CMakeFiles/Berland_Music_CodeFoeces.dir/flags.make
CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Clion Projects\Berland Music CodeFoeces\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.obj"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Berland_Music_CodeFoeces.dir\main.cpp.obj -c "F:\Clion Projects\Berland Music CodeFoeces\main.cpp"

CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.i"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Clion Projects\Berland Music CodeFoeces\main.cpp" > CMakeFiles\Berland_Music_CodeFoeces.dir\main.cpp.i

CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.s"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Clion Projects\Berland Music CodeFoeces\main.cpp" -o CMakeFiles\Berland_Music_CodeFoeces.dir\main.cpp.s

# Object files for target Berland_Music_CodeFoeces
Berland_Music_CodeFoeces_OBJECTS = \
"CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.obj"

# External object files for target Berland_Music_CodeFoeces
Berland_Music_CodeFoeces_EXTERNAL_OBJECTS =

Berland_Music_CodeFoeces.exe: CMakeFiles/Berland_Music_CodeFoeces.dir/main.cpp.obj
Berland_Music_CodeFoeces.exe: CMakeFiles/Berland_Music_CodeFoeces.dir/build.make
Berland_Music_CodeFoeces.exe: CMakeFiles/Berland_Music_CodeFoeces.dir/linklibs.rsp
Berland_Music_CodeFoeces.exe: CMakeFiles/Berland_Music_CodeFoeces.dir/objects1.rsp
Berland_Music_CodeFoeces.exe: CMakeFiles/Berland_Music_CodeFoeces.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Clion Projects\Berland Music CodeFoeces\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Berland_Music_CodeFoeces.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Berland_Music_CodeFoeces.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Berland_Music_CodeFoeces.dir/build: Berland_Music_CodeFoeces.exe
.PHONY : CMakeFiles/Berland_Music_CodeFoeces.dir/build

CMakeFiles/Berland_Music_CodeFoeces.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Berland_Music_CodeFoeces.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Berland_Music_CodeFoeces.dir/clean

CMakeFiles/Berland_Music_CodeFoeces.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Clion Projects\Berland Music CodeFoeces" "F:\Clion Projects\Berland Music CodeFoeces" "F:\Clion Projects\Berland Music CodeFoeces\cmake-build-debug" "F:\Clion Projects\Berland Music CodeFoeces\cmake-build-debug" "F:\Clion Projects\Berland Music CodeFoeces\cmake-build-debug\CMakeFiles\Berland_Music_CodeFoeces.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Berland_Music_CodeFoeces.dir/depend
