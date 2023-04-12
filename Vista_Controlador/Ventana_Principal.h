//
// Created by yonathanms on 08/04/23.
//

#include "SFML/Graphics.hpp"
using namespace sf;

#ifndef PRUEBASPROYECTO_VENTANA_PRINCIPAL_H
#define PRUEBASPROYECTO_VENTANA_PRINCIPAL_H

#endif //PRUEBASPROYECTO_VENTANA_PRINCIPAL_H

class ventana_Principal{       ///clase ventana del menu

public:
    ventana_Principal(int dimension_x, int dimension_y);      /// ahi tiene los parametros de las diemsiones que uno quiera
    void renderizar();         /// este es el metodo renderizar
    void ciclo();               /// metodo de los ciclos

private:
    RenderWindow * VentanaMenu; ////representa la ventana principal, pero a pesar de eso es un atributo, no es un objeto como tal
    int fps;    //// representa un id para la cantidad de frames por segundo, igualmente es un atributo y se le da valor en el .cpp
};
