//
// Created by yonathanms on 15/04/23.
//

#include "../Vista_Controlador/Bullet.h"
#include "iostream"
/***
 * @author Yonathan Monge
 * @brief Constructor de la clase "Bullet"
 *
 * se instancian las texturas y hitbox a las balas con punteros, ademas
 * se les da tamaño y posición
 */
Bullet::Bullet() {

    //instancia
    texture_bullet = new Texture;
    sprite_bullet = new Sprite;

    //scala, posicion y textura
    texture_bullet->loadFromFile("../Recursos/Bullet.png");
    sprite_bullet->setScale(1.f/14,1.f/10);
    sprite_bullet->setTexture(*texture_bullet);
    sprite_bullet->setPosition(170,2000);

}
/***
 * @brief es un get, que retorna la textura de la bala
 * @return Retorna un Sprite.
 */
Sprite Bullet::getSprtBullet() {
    return *sprite_bullet;
}

/***
 * @brief Este método indica la posición en el eje x de la bala
 *
 * @return Retorna un entero, representa la posición en el eje x de
 * la bala
 */
int Bullet::GetPosXbullet() {
    return sprite_bullet->getPosition().x;
}

/***
 * @brief Movimiento de las balas.
 *
 * Esta función permite mover la bala en la interfaz gráfica.
 *
 * @param PosicionS es de tipo enterp y es la posición actual de la nave del jugador em el eje "y"
 * en esta posición aparecen las balas
 */
void Bullet::Movebullet(int PosicionS) {
    if(sprite_bullet->getPosition().x == 170){
        sprite_bullet->setPosition(sprite_bullet->getPosition().x+5, PosicionS);
    }
    else{
        sprite_bullet->move(12.0f, 0);
    }
}






