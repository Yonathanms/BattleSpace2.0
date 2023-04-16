//
// Created by yonathanms on 15/04/23.
//
#include "../Vista_Controlador/VentanaFacil.h"
#include "iostream"

Ventana_Facil::Ventana_Facil() {
    VentanaFacil = new RenderWindow(VideoMode(1350, 850), "Game Mode: Facil");
    VentanaFacil->setFramerateLimit(60);
    evento = new Event;
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
        }
    }
}
//--------------------------------------------------------------------------------------------/

void Ventana_Facil::renderizar() {
    VentanaFacil->clear();
    VentanaFacil->draw(GetSprShip());  ///obtiene el sprite de la nave  del "ship.h" por medio de herencia
    VentanaFacil->display();
    std::cout<<"Hola kvros soy un bucle de pruebas"<<std::endl;
}

void Ventana_Facil::ciclo(){
    while (VentanaFacil->isOpen()){
        renderizar();
        eventos();
    }

}

