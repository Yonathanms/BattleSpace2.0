//
// Created by yonathanms on 15/04/23.
//
#pragma once

#include "SFML/Graphics.hpp"

using namespace sf;

#ifndef PRUEBASPROYECTO_VENTANAFACIL_H
#define PRUEBASPROYECTO_VENTANAFACIL_H


class Ventana_Facil {

public:
    //metodos
    Ventana_Facil();
    void ciclo();
    void renderizar();
    void eventos();



private:
    //atributos
    RenderWindow *VentanaFacil;
    Event *event;

};


#endif //PRUEBASPROYECTO_VENTANAFACIL_H
