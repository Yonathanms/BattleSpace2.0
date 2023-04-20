cmake_minimum_required(VERSION 3.25)
project(PruebasProyecto)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics audio)

add_executable(PruebasProyecto Modelo/main.cpp Modelo/Ventana_Principal.cpp Vista_Controlador/Ventana_Principal.h Modelo/VentanaFacil.cpp Vista_Controlador/VentanaFacil.h
        Modelo/Enemigos.cpp Vista_Controlador/Enemigos.h Modelo/Ship.cpp Vista_Controlador/Ship.h Modelo/Bullet.cpp Vista_Controlador/Bullet.h Modelo/Ventana_media.cpp Vista_Controlador/Ventana_media.h Modelo/Ventana_dificil.cpp Vista_Controlador/Ventana_dificil.h)

target_include_directories(PruebasProyecto PRIVATE /usr/include/libserial)
target_link_libraries(PruebasProyecto sfml-graphics sfml-audio serial)
