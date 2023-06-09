//
// Created by yonathanms on 15/04/23.
//

#ifndef PRUEBASPROYECTO_ENEMIGOS_H

#include "SFML/Graphics.hpp"
#include "stdlib.h"
#include "iostream"

#define PRUEBASPROYECTO_ENEMIGOS_H

using namespace std;
using namespace sf;


class Enemigos {

public:
    Enemigos();
    Sprite GetSpriteEnemy(int gmode);
    int GetPosXEnemy();
    void MoveEnemy(int Move, float GameM);

private:

    Sprite *sprt_enemy;
    Texture *text_enemy1;
    Texture *text_enemy2;
    Texture *text_enemy3;

    Time *TiempotranscurridoE;
    Clock *RelojE;

};


#endif //PRUEBASPROYECTO_ENEMIGOS_H
