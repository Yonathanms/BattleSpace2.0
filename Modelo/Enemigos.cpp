//
// Created by yonathanms on 15/04/23.
//

#include "../Vista_Controlador/Enemigos.h"
Enemigos::Enemigos() {

    sprt_enemy = new Sprite;
    text_enemy1 = new Texture;
    text_enemy2 = new Texture;
    text_enemy3 = new Texture;

    text_enemy1->loadFromFile("../Recursos/enemigo"+to_string(rand()%3+1)+".png");
    text_enemy2->loadFromFile("../Recursos/enemigo"+to_string(rand()%4+1)+".png");
    text_enemy3->loadFromFile("../Recursos/enemigo"+to_string(rand()%6+1)+".png");

    sprt_enemy->setScale(1.f/5,1.f/5);
    sprt_enemy->setPosition(1300,rand()%830 + 20);

}

Sprite Enemigos::GetSpriteEnemy(int gmode) {
    if (gmode == 1) {
        sprt_enemy->setTexture(*text_enemy1);
        return *sprt_enemy;
    }
    if (gmode == 2) {
        sprt_enemy->setTexture(*text_enemy2);
        return *sprt_enemy;
    }
    if (gmode == 3) {
        sprt_enemy->setTexture(*text_enemy3);
        return *sprt_enemy;
    }
}

///void Enemigos::MoveEnemy(int Move_Y) {
   /// if (Move_Y == 1){

    ///}

///}
