//
// Created by yonathanms on 15/04/23.
//

#pragma once

#ifndef PRUEBASPROYECTO_BULLET_H

#include "SFML/Graphics.hpp"

#define PRUEBASPROYECTO_BULLET_H
using namespace std;
using namespace sf;


class Bullet {
public:
    Bullet();
    Sprite getSprtBullet();
    void Movebullet(int PosicionS);

private:
    Texture *texture_bullet;
    Sprite *sprite_bullet;

};


#endif //PRUEBASPROYECTO_BULLET_H
