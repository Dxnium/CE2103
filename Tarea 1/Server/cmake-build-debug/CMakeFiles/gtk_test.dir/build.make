# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /snap/clion/81/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/81/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/gtk_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gtk_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gtk_test.dir/flags.make

CMakeFiles/gtk_test.dir/main.cpp.o: CMakeFiles/gtk_test.dir/flags.make
CMakeFiles/gtk_test.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gtk_test.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtk_test.dir/main.cpp.o -c "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/main.cpp"

CMakeFiles/gtk_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtk_test.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/main.cpp" > CMakeFiles/gtk_test.dir/main.cpp.i

CMakeFiles/gtk_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtk_test.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/main.cpp" -o CMakeFiles/gtk_test.dir/main.cpp.s

CMakeFiles/gtk_test.dir/swap.cpp.o: CMakeFiles/gtk_test.dir/flags.make
CMakeFiles/gtk_test.dir/swap.cpp.o: ../swap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gtk_test.dir/swap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtk_test.dir/swap.cpp.o -c "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/swap.cpp"

CMakeFiles/gtk_test.dir/swap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtk_test.dir/swap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/swap.cpp" > CMakeFiles/gtk_test.dir/swap.cpp.i

CMakeFiles/gtk_test.dir/swap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtk_test.dir/swap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/swap.cpp" -o CMakeFiles/gtk_test.dir/swap.cpp.s

CMakeFiles/gtk_test.dir/Server.cpp.o: CMakeFiles/gtk_test.dir/flags.make
CMakeFiles/gtk_test.dir/Server.cpp.o: ../Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/gtk_test.dir/Server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtk_test.dir/Server.cpp.o -c "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/Server.cpp"

CMakeFiles/gtk_test.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtk_test.dir/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/Server.cpp" > CMakeFiles/gtk_test.dir/Server.cpp.i

CMakeFiles/gtk_test.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtk_test.dir/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/Server.cpp" -o CMakeFiles/gtk_test.dir/Server.cpp.s

# Object files for target gtk_test
gtk_test_OBJECTS = \
"CMakeFiles/gtk_test.dir/main.cpp.o" \
"CMakeFiles/gtk_test.dir/swap.cpp.o" \
"CMakeFiles/gtk_test.dir/Server.cpp.o"

# External object files for target gtk_test
gtk_test_EXTERNAL_OBJECTS =

gtk_test: CMakeFiles/gtk_test.dir/main.cpp.o
gtk_test: CMakeFiles/gtk_test.dir/swap.cpp.o
gtk_test: CMakeFiles/gtk_test.dir/Server.cpp.o
gtk_test: CMakeFiles/gtk_test.dir/build.make
gtk_test: CMakeFiles/gtk_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable gtk_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtk_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gtk_test.dir/build: gtk_test

.PHONY : CMakeFiles/gtk_test.dir/build

CMakeFiles/gtk_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gtk_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gtk_test.dir/clean

CMakeFiles/gtk_test.dir/depend:
	cd "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server" "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server" "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug" "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug" "/home/danium/Documents/GitHub/CE2103/Tarea 1/Server/cmake-build-debug/CMakeFiles/gtk_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/gtk_test.dir/depend

