cmake_minimum_required(VERSION 3.25)
project(PruebasProyecto)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics audio)

add_executable(PruebasProyecto Modelo/main.cpp Modelo/Ventana_Principal.cpp Vista_Controlador/Ventana_Principal.h)

target_link_libraries(PruebasProyecto sfml-graphics sfml-audio)
