//
// Created by yonathanms on 15/04/23.
//

#pragma once

#include "SFML/Graphics.hpp"

using namespace sf;

#ifndef PRUEBASPROYECTO_BULLET_H
#define PRUEBASPROYECTO_BULLET_H


class Bullet {
public:
    Bullet();
    void SetNumBullet();
    Sprite GetSprBullet();
    void MoveBullet_Y(int num_direction);
    void MoveBullet_X();
    void Damage_B();

private:
    Texture *txtr_bullet;
    Sprite *spr_bullet;
    int num_bullet;

};


#endif //PRUEBASPROYECTO_BULLET_H
