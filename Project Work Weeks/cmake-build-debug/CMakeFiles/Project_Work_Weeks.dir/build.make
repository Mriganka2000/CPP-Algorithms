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
CMAKE_SOURCE_DIR = "F:\Clion Projects\Project Work Weeks"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Clion Projects\Project Work Weeks\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Project_Work_Weeks.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Project_Work_Weeks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_Work_Weeks.dir/flags.make

CMakeFiles/Project_Work_Weeks.dir/main.cpp.obj: CMakeFiles/Project_Work_Weeks.dir/flags.make
CMakeFiles/Project_Work_Weeks.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Clion Projects\Project Work Weeks\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_Work_Weeks.dir/main.cpp.obj"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project_Work_Weeks.dir\main.cpp.obj -c "F:\Clion Projects\Project Work Weeks\main.cpp"

CMakeFiles/Project_Work_Weeks.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_Work_Weeks.dir/main.cpp.i"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Clion Projects\Project Work Weeks\main.cpp" > CMakeFiles\Project_Work_Weeks.dir\main.cpp.i

CMakeFiles/Project_Work_Weeks.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_Work_Weeks.dir/main.cpp.s"
	F:\Msysys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Clion Projects\Project Work Weeks\main.cpp" -o CMakeFiles\Project_Work_Weeks.dir\main.cpp.s

# Object files for target Project_Work_Weeks
Project_Work_Weeks_OBJECTS = \
"CMakeFiles/Project_Work_Weeks.dir/main.cpp.obj"

# External object files for target Project_Work_Weeks
Project_Work_Weeks_EXTERNAL_OBJECTS =

Project_Work_Weeks.exe: CMakeFiles/Project_Work_Weeks.dir/main.cpp.obj
Project_Work_Weeks.exe: CMakeFiles/Project_Work_Weeks.dir/build.make
Project_Work_Weeks.exe: CMakeFiles/Project_Work_Weeks.dir/linklibs.rsp
Project_Work_Weeks.exe: CMakeFiles/Project_Work_Weeks.dir/objects1.rsp
Project_Work_Weeks.exe: CMakeFiles/Project_Work_Weeks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Clion Projects\Project Work Weeks\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project_Work_Weeks.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project_Work_Weeks.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_Work_Weeks.dir/build: Project_Work_Weeks.exe
.PHONY : CMakeFiles/Project_Work_Weeks.dir/build

CMakeFiles/Project_Work_Weeks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project_Work_Weeks.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project_Work_Weeks.dir/clean

CMakeFiles/Project_Work_Weeks.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Clion Projects\Project Work Weeks" "F:\Clion Projects\Project Work Weeks" "F:\Clion Projects\Project Work Weeks\cmake-build-debug" "F:\Clion Projects\Project Work Weeks\cmake-build-debug" "F:\Clion Projects\Project Work Weeks\cmake-build-debug\CMakeFiles\Project_Work_Weeks.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Project_Work_Weeks.dir/depend

