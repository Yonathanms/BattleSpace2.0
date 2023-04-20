//
// Created by yonathanms on 15/04/23.
//
#pragma once





#ifndef PRUEBASPROYECTO_VENTANAFACIL_H

#include "SerialStream.h"
#include "SerialStreamBuf.h"
#include "thread"
#include "SerialPortConstants.h"
#include "SFML/Graphics.hpp"
#include "Ship.h"
#include "../Vista_Controlador/Bullet.h"
#include "../Vista_Controlador/Enemigos.h"

#define PRUEBASPROYECTO_VENTANAFACIL_H

using namespace sf;
using namespace std;

class Ventana_Facil: public Ship, public Bullet, public Enemigos{
public:
    LibSerial::SerialStream arduino;
    std::string input;
    ///metodos
    Ventana_Facil(Vector2f resolucion);
    void LeerArduino();
    void ciclo();
    void renderizar();
    void eventos();
    void RenderBullets();
    int Reduccion_Bullets(int num_actual);
    int Reduccion_Enemys(int num_actual);
    

    void RenderEnemys();



private:
    ///atributos
    bool GameOver;

    RenderWindow *VentanaFacil;
    Event *evento;

    Clock *Reloj_Ventana;
    Time *TiempoTranscurrido;
    Clock *Reloj_Ventana2;
    Time *TiempoTranscurrido2;

    int  num_bala;
    Bullet balas[200];   //Cantidad máxima de munición

    int num_random1;
    int num_random2;
    int num_random3;

    int num_enemyAUX;
    int num_enemy;
    Enemigos enemys[6]; //Cantidad de enemigos por oleada



};


#endif //PRUEBASPROYECTO_VENTANAFACIL_H
