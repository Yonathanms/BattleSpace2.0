//
// Created by yonathanms on 15/04/23.
//

#include "../Vista_Controlador/Ship.h"
#include "iostream"

Ship::Ship(){
    //le damos valor a los punteros
    spr_ships = new Sprite;
    txtr_ships = new Texture;

    //cargamos la textura
    txtr_ships->loadFromFile("../Recursos/navee.png");
    spr_ships->setTexture(*txtr_ships);
}

Sprite Ship::GetSprShip() {
    return *spr_ships;
}
