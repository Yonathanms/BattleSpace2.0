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
    spr_ships->setPosition(80, 325);
}
//obtiene la textura y sprite de la nave principal:
Sprite Ship::GetSprShip() {
    return *spr_ships;
}

//metodo del movimiento de la nave, ingresa como variable un entero y una ventana;
void Ship::MoveS(int num_direction) {
    if (num_direction == 1) {
        if (spr_ships->getPosition().y - 10 >= 0) {
            spr_ships->setPosition(spr_ships->getPosition().x, spr_ships->getPosition().y - 10);
            std::cout << "me movi para arriba" << std::endl;
        }
    }
    if (num_direction == 0) {
        if (spr_ships->getPosition().y +10 <= 800){
            spr_ships->setPosition(spr_ships->getPosition().x, spr_ships->getPosition().y + 10);
            std::cout << "me movi para abajo" << std::endl;
        }
    }
}