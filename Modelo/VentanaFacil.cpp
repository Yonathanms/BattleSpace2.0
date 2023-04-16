//
// Created by yonathanms on 15/04/23.
//

#include "../Vista_Controlador/VentanaFacil.h"
#include "iostream"

Ventana_Facil::Ventana_Facil() {
    VentanaFacil = new RenderWindow(VideoMode(1350, 850), "Game Mode: Facil");
    VentanaFacil->setFramerateLimit(60);
    ciclo();
}

void Ventana_Facil::eventos() {

}

void Ventana_Facil::renderizar() {
    VentanaFacil->clear();
    VentanaFacil->display();
    std::cout<<"Hola kvros"<<std::endl;
}

void Ventana_Facil::ciclo(){
    while (VentanaFacil->isOpen()){
        renderizar();
    }

}

