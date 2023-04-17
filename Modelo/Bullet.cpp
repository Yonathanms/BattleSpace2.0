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
    spr_bullet->setPosition(170,2000);
}
///obtiene el sprite de la bala
Sprite Bullet::GetSprBullet() {
    return *spr_bullet;
}
///obtiene la cantidad de balas que hayamos otorgado en las clases ventanas
int Bullet::SetNumBullet(int c_balas) {
    std::cout<<"cantidad de balas totales por 'cartucho' = "<<c_balas<<std::endl;
    num_bullet=c_balas;
    total_num_bullet=c_balas;
    return c_balas;
}

///Es el metodo bullet collector, este metodo debe reutilizar la memoria y disminuir el daño de las balas
void Bullet::BulletCollector() {
    std::cout<<"numero de identificador de la bala= "<<num_bullet<<std::endl;         ///tengo que mostrar las balas primero para poder hacer esto xd************************
}

///es un metodo que permite spawnear la bala en la posicion y enemiga y luego se mueve en x
void Bullet::MoveBullet_X(int Posicion_Spawn) {

    if (num_bullet>0){
        num_bullet--;
    }
    if (num_bullet<=0){
        num_bullet = total_num_bullet;
        std::cout<<"municion descargada"<<std::endl;
    }
    if (spr_bullet->getPosition().x==170){
        spr_bullet->setPosition(spr_bullet->getPosition().x+5,Posicion_Spawn);

    }
    if (spr_bullet->getPosition().x!=170){
        spr_bullet->setPosition(spr_bullet->getPosition().x+5,spr_bullet->getPosition().y);
    }
    std::cout<<"balas restantes= "<<num_bullet<<::std::endl;
}






