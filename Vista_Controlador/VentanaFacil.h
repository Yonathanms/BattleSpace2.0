//
// Created by yonathanms on 15/04/23.
//
#pragma once





#ifndef PRUEBASPROYECTO_VENTANAFACIL_H

#include "SFML/Graphics.hpp"
#include "Ship.h"
#include "../Vista_Controlador/Bullet.h"
#include "../Vista_Controlador/Bullet.h"
#include "../Vista_Controlador/Enemigos.h"

#define PRUEBASPROYECTO_VENTANAFACIL_H

using namespace sf;
using namespace std;

class Ventana_Facil: public Ship, public Bullet, public Enemigos{
public:
    ///metodos
    Ventana_Facil(Vector2f resolucion);
    void ciclo();
    void renderizar();
    void eventos();
    void RenderBullets();
    int Reduccion_Bullets(int num_actual);



private:
    ///atributos
    bool GameOver;

    RenderWindow *VentanaFacil;
    Event *evento;

    Clock *Reloj_Ventana;
    Time *TiempoTranscurrido;

    int  num_bala;

    Bullet balas[200];   //Cantidad máxima de munición

};


#endif //PRUEBASPROYECTO_VENTANAFACIL_H
