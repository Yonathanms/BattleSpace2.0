//
// Created by yonathanms on 15/04/23.
//

#include "../Vista_Controlador/Ship.h"
#include "iostream"

Ship::Ship(){
    ///le damos valor a los punteros
    spr_ships = new Sprite;
    txtr_ships = new Texture;

    //cargamos la textura
    txtr_ships->loadFromFile("../Recursos/navee.png");
    spr_ships->setTexture(*txtr_ships);
    spr_ships->setPosition(80, 395);
}
///Obtener la posicion en y de la nave.
int Ship::GetPositionShip_Y() {
    if(spr_ships->getPosition().x==80){
        return spr_ships->getPosition().y+20;
    }
}

///obtiene la textura y sprite de la nave principal:
Sprite Ship::GetSprShip() {
    return *spr_ships;
}

///metodo del movimiento de la nave, ingresa como variable un entero
void Ship::MoveS(int num_direction) {
    if (num_direction == 1) {           ///se mueve hacia arriba
        if (spr_ships->getPosition().y - 10 >= 0) {
            spr_ships->setPosition(spr_ships->getPosition().x, spr_ships->getPosition().y - 10);
        }
    }
    if (num_direction == 0) {                      ///se mueve hacia abajo
        if (spr_ships->getPosition().y +10 <= 800){
            spr_ships->setPosition(spr_ships->getPosition().x, spr_ships->getPosition().y + 10);
        }
    }
}