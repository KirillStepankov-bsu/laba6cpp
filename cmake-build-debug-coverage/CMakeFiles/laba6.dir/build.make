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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Asus\CLionProjects\laba6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Asus\CLionProjects\laba6\cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/laba6.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/laba6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/laba6.dir/flags.make

CMakeFiles/laba6.dir/NormalFraction.cpp.obj: CMakeFiles/laba6.dir/flags.make
CMakeFiles/laba6.dir/NormalFraction.cpp.obj: CMakeFiles/laba6.dir/includes_CXX.rsp
CMakeFiles/laba6.dir/NormalFraction.cpp.obj: ../NormalFraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Asus\CLionProjects\laba6\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/laba6.dir/NormalFraction.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\laba6.dir\NormalFraction.cpp.obj -c C:\Users\Asus\CLionProjects\laba6\NormalFraction.cpp

CMakeFiles/laba6.dir/NormalFraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/laba6.dir/NormalFraction.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Asus\CLionProjects\laba6\NormalFraction.cpp > CMakeFiles\laba6.dir\NormalFraction.cpp.i

CMakeFiles/laba6.dir/NormalFraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/laba6.dir/NormalFraction.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Asus\CLionProjects\laba6\NormalFraction.cpp -o CMakeFiles\laba6.dir\NormalFraction.cpp.s

CMakeFiles/laba6.dir/tests.cpp.obj: CMakeFiles/laba6.dir/flags.make
CMakeFiles/laba6.dir/tests.cpp.obj: CMakeFiles/laba6.dir/includes_CXX.rsp
CMakeFiles/laba6.dir/tests.cpp.obj: ../tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Asus\CLionProjects\laba6\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/laba6.dir/tests.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\laba6.dir\tests.cpp.obj -c C:\Users\Asus\CLionProjects\laba6\tests.cpp

CMakeFiles/laba6.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/laba6.dir/tests.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Asus\CLionProjects\laba6\tests.cpp > CMakeFiles\laba6.dir\tests.cpp.i

CMakeFiles/laba6.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/laba6.dir/tests.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Asus\CLionProjects\laba6\tests.cpp -o CMakeFiles\laba6.dir\tests.cpp.s

# Object files for target laba6
laba6_OBJECTS = \
"CMakeFiles/laba6.dir/NormalFraction.cpp.obj" \
"CMakeFiles/laba6.dir/tests.cpp.obj"

# External object files for target laba6
laba6_EXTERNAL_OBJECTS =

laba6.exe: CMakeFiles/laba6.dir/NormalFraction.cpp.obj
laba6.exe: CMakeFiles/laba6.dir/tests.cpp.obj
laba6.exe: CMakeFiles/laba6.dir/build.make
laba6.exe: lib/libgtest_maind.a
laba6.exe: lib/libgtestd.a
laba6.exe: CMakeFiles/laba6.dir/linklibs.rsp
laba6.exe: CMakeFiles/laba6.dir/objects1.rsp
laba6.exe: CMakeFiles/laba6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Asus\CLionProjects\laba6\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable laba6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\laba6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/laba6.dir/build: laba6.exe
.PHONY : CMakeFiles/laba6.dir/build

CMakeFiles/laba6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\laba6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/laba6.dir/clean

CMakeFiles/laba6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Asus\CLionProjects\laba6 C:\Users\Asus\CLionProjects\laba6 C:\Users\Asus\CLionProjects\laba6\cmake-build-debug-coverage C:\Users\Asus\CLionProjects\laba6\cmake-build-debug-coverage C:\Users\Asus\CLionProjects\laba6\cmake-build-debug-coverage\CMakeFiles\laba6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/laba6.dir/depend

