# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\build

# Include any dependencies generated for this target.
include CMakeFiles/PEOT.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PEOT.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PEOT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PEOT.dir/flags.make

CMakeFiles/PEOT.dir/main.cpp.obj: CMakeFiles/PEOT.dir/flags.make
CMakeFiles/PEOT.dir/main.cpp.obj: CMakeFiles/PEOT.dir/includes_CXX.rsp
CMakeFiles/PEOT.dir/main.cpp.obj: C:/Users/thisn/OneDrive/Desktop/Projects/PEOT/PEOT/main.cpp
CMakeFiles/PEOT.dir/main.cpp.obj: CMakeFiles/PEOT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PEOT.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PEOT.dir/main.cpp.obj -MF CMakeFiles\PEOT.dir\main.cpp.obj.d -o CMakeFiles\PEOT.dir\main.cpp.obj -c C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\main.cpp

CMakeFiles/PEOT.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEOT.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\main.cpp > CMakeFiles\PEOT.dir\main.cpp.i

CMakeFiles/PEOT.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEOT.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\main.cpp -o CMakeFiles\PEOT.dir\main.cpp.s

CMakeFiles/PEOT.dir/Particle.cpp.obj: CMakeFiles/PEOT.dir/flags.make
CMakeFiles/PEOT.dir/Particle.cpp.obj: CMakeFiles/PEOT.dir/includes_CXX.rsp
CMakeFiles/PEOT.dir/Particle.cpp.obj: C:/Users/thisn/OneDrive/Desktop/Projects/PEOT/PEOT/Particle.cpp
CMakeFiles/PEOT.dir/Particle.cpp.obj: CMakeFiles/PEOT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PEOT.dir/Particle.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PEOT.dir/Particle.cpp.obj -MF CMakeFiles\PEOT.dir\Particle.cpp.obj.d -o CMakeFiles\PEOT.dir\Particle.cpp.obj -c C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\Particle.cpp

CMakeFiles/PEOT.dir/Particle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEOT.dir/Particle.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\Particle.cpp > CMakeFiles\PEOT.dir\Particle.cpp.i

CMakeFiles/PEOT.dir/Particle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEOT.dir/Particle.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\Particle.cpp -o CMakeFiles\PEOT.dir\Particle.cpp.s

# Object files for target PEOT
PEOT_OBJECTS = \
"CMakeFiles/PEOT.dir/main.cpp.obj" \
"CMakeFiles/PEOT.dir/Particle.cpp.obj"

# External object files for target PEOT
PEOT_EXTERNAL_OBJECTS =

PEOT.exe: CMakeFiles/PEOT.dir/main.cpp.obj
PEOT.exe: CMakeFiles/PEOT.dir/Particle.cpp.obj
PEOT.exe: CMakeFiles/PEOT.dir/build.make
PEOT.exe: CMakeFiles/PEOT.dir/linkLibs.rsp
PEOT.exe: CMakeFiles/PEOT.dir/objects1
PEOT.exe: CMakeFiles/PEOT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable PEOT.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PEOT.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PEOT.dir/build: PEOT.exe
.PHONY : CMakeFiles/PEOT.dir/build

CMakeFiles/PEOT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PEOT.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PEOT.dir/clean

CMakeFiles/PEOT.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\build C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\build C:\Users\thisn\OneDrive\Desktop\Projects\PEOT\PEOT\build\CMakeFiles\PEOT.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PEOT.dir/depend
