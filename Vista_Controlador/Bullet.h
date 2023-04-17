//
// Created by yonathanms on 15/04/23.
//

#pragma once

#include "../Vista_Controlador/Ship.h"
#include "SFML/Graphics.hpp"

using namespace sf;

#ifndef PRUEBASPROYECTO_BULLET_H
#define PRUEBASPROYECTO_BULLET_H


class Bullet{
public:
    Bullet();
    int SetNumBullet(int c_balas);
    Sprite GetSprBullet();
    void MoveBullet_X(int Posicion_Spawn);
    void BulletCollector();
    void Damage_B();

private:
    Texture *txtr_bullet;
    Sprite *spr_bullet;
    int num_bullet;
    int total_num_bullet;
    int *id_bullet;
};


#endif //PRUEBASPROYECTO_BULLET_H
