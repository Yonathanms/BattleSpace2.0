//
// Created by yonathanms on 08/04/23.
//
#pragma once

#include "SFML/Graphics.hpp"

using namespace sf;

#ifndef PRUEBASPROYECTO_VENTANA_PRINCIPAL_H
#define PRUEBASPROYECTO_VENTANA_PRINCIPAL_H


class ventana_Principal{       ///clase ventana del menu

public:
    ventana_Principal();      /// ahi tiene los parametros de las diemsiones que uno quiera
    void renderizar();         /// este es el metodo renderizar
    void ciclo();               /// metodo de los ciclos
    void botones();
    void eventos();

private:
    RectangleShape * btnFacil;
    RectangleShape * btnMedio;
    RectangleShape  *btnDificil;
    Event *evento;
    RenderWindow  *VentanaMenu; ////representa la ventana principal, pero a pesar de eso es un atributo, no es un objeto como tal

};

#endif PRUEBASPROYECTO_VENTANA_PRINCIPAL_H