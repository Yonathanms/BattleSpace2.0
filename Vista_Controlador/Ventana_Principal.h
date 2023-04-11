//
// Created by yonathanms on 08/04/23.
//

#include "SFML/Graphics.hpp"
using namespace sf;

#ifndef PRUEBASPROYECTO_VENTANA_PRINCIPAL_H
#define PRUEBASPROYECTO_VENTANA_PRINCIPAL_H

#endif //PRUEBASPROYECTO_VENTANA_PRINCIPAL_H

class ventana_Principal{
public:
    ventana_Principal(int dimension_x, int dimension_y);
    void renderizar();
    void ciclo();

private:
    RenderWindow * VentanaMenu;
    int fps;

};
