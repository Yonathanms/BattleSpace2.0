//
// Created by yonathanms on 15/04/23.
//


#include "../Vista_Controlador/VentanaFacil.h"
#include "iostream"

///inicializa la ventana facil
Ventana_Facil::Ventana_Facil() {
    VentanaFacil = new RenderWindow(VideoMode(1350, 850), "Game Mode: Facil");
    VentanaFacil->setFramerateLimit(1);            ///esta a 1 fps para poder debuguear codigo con prints
    evento = new Event;

    SetNumBullet(4); ///numero de balas que uno quiera

    ciclo();
}


//--------------------------------------------------------------------------------------------/
void Ventana_Facil::eventos() {
    while (VentanaFacil->pollEvent(*evento)) {
        switch (evento->type) {
            case Event::Closed:
                VentanaFacil->close();
                std::cout << "Ventana facil cerrada de forma exitosa" << std::endl;
                exit(1);

            case Event::KeyPressed:
                if (Keyboard::isKeyPressed(Keyboard::W)) {
                    MoveS(1);                                /// al apretar 'w' ingresa un '1' en la funcion de movimiento de la nave
                }
                if (Keyboard::isKeyPressed(Keyboard::S)){
                    MoveS(0);                              /// al apretar 'w' ingresa un '0' en la funcion de movimiento de la nave
                }
        }
    }
}
//--------------------------------------------------------------------------------------------/
void Ventana_Facil::renderizar() {
    VentanaFacil->clear();
    VentanaFacil->draw(GetSprShip());  ///obtiene el sprite de la nave  del "ship.h" por medio de herencia
    VentanaFacil->draw(GetSprBullet()); ///obtiene el sprite de la nave  del "ship.h" por medio de herencia
    VentanaFacil->display();
}

void Ventana_Facil::ciclo(){
    while (VentanaFacil->isOpen()){
        renderizar();
        BulletCollector(); ///inicializa el reciclaje de memoria.
        MoveBullet_X(GetPositionShip_Y());  /// dependiendo de donde se ubique la nave, en esa posicion spawnean las balas
        eventos();
    }
}

