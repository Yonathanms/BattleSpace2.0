# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/234/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/234/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/axel/Escritorio/proyect_repo/BattleSpace2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PruebasProyecto.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PruebasProyecto.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PruebasProyecto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PruebasProyecto.dir/flags.make

CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o: CMakeFiles/PruebasProyecto.dir/flags.make
CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o: /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/main.cpp
CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o: CMakeFiles/PruebasProyecto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o -MF CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o.d -o CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o -c /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/main.cpp

CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/main.cpp > CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.i

CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/main.cpp -o CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.s

CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o: CMakeFiles/PruebasProyecto.dir/flags.make
CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o: /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Ventana_Principal.cpp
CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o: CMakeFiles/PruebasProyecto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o -MF CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o.d -o CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o -c /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Ventana_Principal.cpp

CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Ventana_Principal.cpp > CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.i

CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Ventana_Principal.cpp -o CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.s

CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o: CMakeFiles/PruebasProyecto.dir/flags.make
CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o: /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/VentanaFacil.cpp
CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o: CMakeFiles/PruebasProyecto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o -MF CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o.d -o CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o -c /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/VentanaFacil.cpp

CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/VentanaFacil.cpp > CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.i

CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/VentanaFacil.cpp -o CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.s

CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o: CMakeFiles/PruebasProyecto.dir/flags.make
CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o: /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Enemigos.cpp
CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o: CMakeFiles/PruebasProyecto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o -MF CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o.d -o CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o -c /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Enemigos.cpp

CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Enemigos.cpp > CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.i

CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Enemigos.cpp -o CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.s

CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o: CMakeFiles/PruebasProyecto.dir/flags.make
CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o: /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Ship.cpp
CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o: CMakeFiles/PruebasProyecto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o -MF CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o.d -o CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o -c /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Ship.cpp

CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Ship.cpp > CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.i

CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Ship.cpp -o CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.s

CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o: CMakeFiles/PruebasProyecto.dir/flags.make
CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o: /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Bullet.cpp
CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o: CMakeFiles/PruebasProyecto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o -MF CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o.d -o CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o -c /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Bullet.cpp

CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Bullet.cpp > CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.i

CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/axel/Escritorio/proyect_repo/BattleSpace2.0/Modelo/Bullet.cpp -o CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.s

# Object files for target PruebasProyecto
PruebasProyecto_OBJECTS = \
"CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o" \
"CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o" \
"CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o" \
"CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o" \
"CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o" \
"CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o"

# External object files for target PruebasProyecto
PruebasProyecto_EXTERNAL_OBJECTS =

PruebasProyecto: CMakeFiles/PruebasProyecto.dir/Modelo/main.cpp.o
PruebasProyecto: CMakeFiles/PruebasProyecto.dir/Modelo/Ventana_Principal.cpp.o
PruebasProyecto: CMakeFiles/PruebasProyecto.dir/Modelo/VentanaFacil.cpp.o
PruebasProyecto: CMakeFiles/PruebasProyecto.dir/Modelo/Enemigos.cpp.o
PruebasProyecto: CMakeFiles/PruebasProyecto.dir/Modelo/Ship.cpp.o
PruebasProyecto: CMakeFiles/PruebasProyecto.dir/Modelo/Bullet.cpp.o
PruebasProyecto: CMakeFiles/PruebasProyecto.dir/build.make
PruebasProyecto: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
PruebasProyecto: /usr/lib/x86_64-linux-gnu/libsfml-audio.so.2.5.1
PruebasProyecto: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
PruebasProyecto: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
PruebasProyecto: CMakeFiles/PruebasProyecto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable PruebasProyecto"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PruebasProyecto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PruebasProyecto.dir/build: PruebasProyecto
.PHONY : CMakeFiles/PruebasProyecto.dir/build

CMakeFiles/PruebasProyecto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PruebasProyecto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PruebasProyecto.dir/clean

CMakeFiles/PruebasProyecto.dir/depend:
	cd /home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/axel/Escritorio/proyect_repo/BattleSpace2.0 /home/axel/Escritorio/proyect_repo/BattleSpace2.0 /home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug /home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug /home/axel/Escritorio/proyect_repo/BattleSpace2.0/cmake-build-debug/CMakeFiles/PruebasProyecto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PruebasProyecto.dir/depend

