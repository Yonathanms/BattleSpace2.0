//
// Created by yonathanms on 15/04/23.
//
#pragma once

#include "SFML/Graphics.hpp"
#include "Ship.h"
#include "../Vista_Controlador/Bullet.h"

using namespace sf;

#ifndef PRUEBASPROYECTO_VENTANAFACIL_H
#define PRUEBASPROYECTO_VENTANAFACIL_H


class Ventana_Facil: public Ship, public Bullet{
public:
    //metodos
    Ventana_Facil();
    void ciclo();
    void renderizar();
    void eventos();



private:
    //atributos
    RenderWindow *VentanaFacil;
    Event *evento;

};


#endif //PRUEBASPROYECTO_VENTANAFACIL_H
