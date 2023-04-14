//
// Created by yonathanms on 08/04/23.
//
#pragma once

#include "SFML/Graphics.hpp"
#include "iostream"
#include "fstream"

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
    int num_dificultad; /// representa la dificultad que va a escoger el jugador seg[un el boton que aprete
    RectangleShape * btnFacil;
    RectangleShape  btnMedio;
    RectangleShape  btnDificil;
    RenderWindow  VentanaMenu; ////representa la ventana principal, pero a pesar de eso es un atributo, no es un objeto como tal
    int fps;    //// representa un id para la cantidad de frames por segundo, igualmente es un atributo y se le da valor en el .cpp
};

#endif PRUEBASPROYECTO_VENTANA_PRINCIPAL_H