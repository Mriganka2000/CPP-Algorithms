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
CMAKE_SOURCE_DIR = "F:\Clion Projects\Open the Dragon Scroll  CodeChef"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Clion Projects\Open the Dragon Scroll  CodeChef\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/flags.make

CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.obj: CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/flags.make
CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Clion Projects\Open the Dragon Scroll  CodeChef\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.obj"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Open_the_Dragon_Scroll__CodeChef.dir\main.cpp.obj -c "F:\Clion Projects\Open the Dragon Scroll  CodeChef\main.cpp"

CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.i"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Clion Projects\Open the Dragon Scroll  CodeChef\main.cpp" > CMakeFiles\Open_the_Dragon_Scroll__CodeChef.dir\main.cpp.i

CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.s"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Clion Projects\Open the Dragon Scroll  CodeChef\main.cpp" -o CMakeFiles\Open_the_Dragon_Scroll__CodeChef.dir\main.cpp.s

# Object files for target Open_the_Dragon_Scroll__CodeChef
Open_the_Dragon_Scroll__CodeChef_OBJECTS = \
"CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.obj"

# External object files for target Open_the_Dragon_Scroll__CodeChef
Open_the_Dragon_Scroll__CodeChef_EXTERNAL_OBJECTS =

Open_the_Dragon_Scroll__CodeChef.exe: CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/main.cpp.obj
Open_the_Dragon_Scroll__CodeChef.exe: CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/build.make
Open_the_Dragon_Scroll__CodeChef.exe: CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/linklibs.rsp
Open_the_Dragon_Scroll__CodeChef.exe: CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/objects1.rsp
Open_the_Dragon_Scroll__CodeChef.exe: CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Clion Projects\Open the Dragon Scroll  CodeChef\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Open_the_Dragon_Scroll__CodeChef.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Open_the_Dragon_Scroll__CodeChef.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/build: Open_the_Dragon_Scroll__CodeChef.exe
.PHONY : CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/build

CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Open_the_Dragon_Scroll__CodeChef.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/clean

CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Clion Projects\Open the Dragon Scroll  CodeChef" "F:\Clion Projects\Open the Dragon Scroll  CodeChef" "F:\Clion Projects\Open the Dragon Scroll  CodeChef\cmake-build-debug" "F:\Clion Projects\Open the Dragon Scroll  CodeChef\cmake-build-debug" "F:\Clion Projects\Open the Dragon Scroll  CodeChef\cmake-build-debug\CMakeFiles\Open_the_Dragon_Scroll__CodeChef.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Open_the_Dragon_Scroll__CodeChef.dir/depend
