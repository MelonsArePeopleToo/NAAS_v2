# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/sanchez/Downloads/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/sanchez/Downloads/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sanchez/CLionProjects/NAAS_client_new

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sanchez/CLionProjects/NAAS_client_new/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NAAS_client_new.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NAAS_client_new.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NAAS_client_new.dir/flags.make

CMakeFiles/NAAS_client_new.dir/main.cpp.o: CMakeFiles/NAAS_client_new.dir/flags.make
CMakeFiles/NAAS_client_new.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sanchez/CLionProjects/NAAS_client_new/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NAAS_client_new.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAAS_client_new.dir/main.cpp.o -c /home/sanchez/CLionProjects/NAAS_client_new/main.cpp

CMakeFiles/NAAS_client_new.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAAS_client_new.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sanchez/CLionProjects/NAAS_client_new/main.cpp > CMakeFiles/NAAS_client_new.dir/main.cpp.i

CMakeFiles/NAAS_client_new.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAAS_client_new.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sanchez/CLionProjects/NAAS_client_new/main.cpp -o CMakeFiles/NAAS_client_new.dir/main.cpp.s

CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.o: CMakeFiles/NAAS_client_new.dir/flags.make
CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.o: ../src/NetWork.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sanchez/CLionProjects/NAAS_client_new/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.o -c /home/sanchez/CLionProjects/NAAS_client_new/src/NetWork.cpp

CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sanchez/CLionProjects/NAAS_client_new/src/NetWork.cpp > CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.i

CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sanchez/CLionProjects/NAAS_client_new/src/NetWork.cpp -o CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.s

# Object files for target NAAS_client_new
NAAS_client_new_OBJECTS = \
"CMakeFiles/NAAS_client_new.dir/main.cpp.o" \
"CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.o"

# External object files for target NAAS_client_new
NAAS_client_new_EXTERNAL_OBJECTS =

NAAS_client_new: CMakeFiles/NAAS_client_new.dir/main.cpp.o
NAAS_client_new: CMakeFiles/NAAS_client_new.dir/src/NetWork.cpp.o
NAAS_client_new: CMakeFiles/NAAS_client_new.dir/build.make
NAAS_client_new: CMakeFiles/NAAS_client_new.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sanchez/CLionProjects/NAAS_client_new/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable NAAS_client_new"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NAAS_client_new.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NAAS_client_new.dir/build: NAAS_client_new

.PHONY : CMakeFiles/NAAS_client_new.dir/build

CMakeFiles/NAAS_client_new.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NAAS_client_new.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NAAS_client_new.dir/clean

CMakeFiles/NAAS_client_new.dir/depend:
	cd /home/sanchez/CLionProjects/NAAS_client_new/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sanchez/CLionProjects/NAAS_client_new /home/sanchez/CLionProjects/NAAS_client_new /home/sanchez/CLionProjects/NAAS_client_new/cmake-build-debug /home/sanchez/CLionProjects/NAAS_client_new/cmake-build-debug /home/sanchez/CLionProjects/NAAS_client_new/cmake-build-debug/CMakeFiles/NAAS_client_new.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NAAS_client_new.dir/depend

