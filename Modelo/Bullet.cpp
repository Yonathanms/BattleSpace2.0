//
// Created by yonathanms on 15/04/23.
//

#include "../Vista_Controlador/Bullet.h"
#include "iostream"

Bullet::Bullet() {
    txtr_bullet = new Texture;
    spr_bullet = new Sprite;

    txtr_bullet->loadFromFile("../Recursos/Bullet.png");
    spr_bullet->setTexture(*txtr_bullet);
    spr_bullet->setScale(1.f/14,1.f/10);
    spr_bullet->setPosition(170,345);
    num_bullet = 50;

}

Sprite Bullet::GetSprBullet() {
    return *spr_bullet;
}

void Bullet::MoveBullet_Y(int num_direction) {
    if (num_direction == 1) {
        if (spr_bullet->getPosition().y - 10 >= 20) {
            spr_bullet->setPosition(spr_bullet->getPosition().x, spr_bullet->getPosition().y - 10);
            std::cout << "me movi para arriba" << std::endl;
        }
    }
    if (num_direction == 0) {
        if (spr_bullet->getPosition().y +10 <= 820){
            spr_bullet->setPosition(spr_bullet->getPosition().x, spr_bullet->getPosition().y + 10);
            std::cout << "me movi para abajo" << std::endl;
        }
    }
}

void Bullet::MoveBullet_X() {
    if (num_bullet>=0){
        num_bullet--;
        std::cout<<num_bullet<<std::endl;
    }
    if (num_bullet<=0){
        std::cout<<"municion descargada"<<std::endl;
        num_bullet=50;

    }
}

void Bullet::SetNumBullet() {
}





