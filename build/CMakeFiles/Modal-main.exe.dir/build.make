# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/feddockh/codingProjects/3M_Application

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/feddockh/codingProjects/3M_Application/build

# Include any dependencies generated for this target.
include CMakeFiles/Modal-main.exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Modal-main.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Modal-main.exe.dir/flags.make

CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.o: CMakeFiles/Modal-main.exe.dir/flags.make
CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.o: ../Modal_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/feddockh/codingProjects/3M_Application/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.o -c /home/feddockh/codingProjects/3M_Application/Modal_main.cpp

CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/feddockh/codingProjects/3M_Application/Modal_main.cpp > CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.i

CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/feddockh/codingProjects/3M_Application/Modal_main.cpp -o CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.s

CMakeFiles/Modal-main.exe.dir/Modal.cpp.o: CMakeFiles/Modal-main.exe.dir/flags.make
CMakeFiles/Modal-main.exe.dir/Modal.cpp.o: ../Modal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/feddockh/codingProjects/3M_Application/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Modal-main.exe.dir/Modal.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Modal-main.exe.dir/Modal.cpp.o -c /home/feddockh/codingProjects/3M_Application/Modal.cpp

CMakeFiles/Modal-main.exe.dir/Modal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Modal-main.exe.dir/Modal.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/feddockh/codingProjects/3M_Application/Modal.cpp > CMakeFiles/Modal-main.exe.dir/Modal.cpp.i

CMakeFiles/Modal-main.exe.dir/Modal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Modal-main.exe.dir/Modal.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/feddockh/codingProjects/3M_Application/Modal.cpp -o CMakeFiles/Modal-main.exe.dir/Modal.cpp.s

# Object files for target Modal-main.exe
Modal__main_exe_OBJECTS = \
"CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.o" \
"CMakeFiles/Modal-main.exe.dir/Modal.cpp.o"

# External object files for target Modal-main.exe
Modal__main_exe_EXTERNAL_OBJECTS =

Modal-main.exe: CMakeFiles/Modal-main.exe.dir/Modal_main.cpp.o
Modal-main.exe: CMakeFiles/Modal-main.exe.dir/Modal.cpp.o
Modal-main.exe: CMakeFiles/Modal-main.exe.dir/build.make
Modal-main.exe: CMakeFiles/Modal-main.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/feddockh/codingProjects/3M_Application/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Modal-main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Modal-main.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Modal-main.exe.dir/build: Modal-main.exe

.PHONY : CMakeFiles/Modal-main.exe.dir/build

CMakeFiles/Modal-main.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Modal-main.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Modal-main.exe.dir/clean

CMakeFiles/Modal-main.exe.dir/depend:
	cd /home/feddockh/codingProjects/3M_Application/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/feddockh/codingProjects/3M_Application /home/feddockh/codingProjects/3M_Application /home/feddockh/codingProjects/3M_Application/build /home/feddockh/codingProjects/3M_Application/build /home/feddockh/codingProjects/3M_Application/build/CMakeFiles/Modal-main.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Modal-main.exe.dir/depend

