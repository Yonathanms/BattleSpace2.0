//
// Created by yonathanms on 15/04/23.
//

#pragma once

#include "SFML/Graphics.hpp"

using namespace sf;

#ifndef PRUEBASPROYECTO_SHIP_H
#define PRUEBASPROYECTO_SHIP_H

/// esta clase pertenece a la nave principal

class Ship{
public:
    Ship();
    Sprite GetSprShip();
    int HealthS();
    int GetPositionShip_Y();
    void MoveS(int num_direction);    ///al ingresar un "1" o "0" se va a mover hacia arriba y hacia abajo

private:
    Sprite *spr_ships;
    Texture *txtr_ships;

};


#endif //PRUEBASPROYECTO_SHIP_H
