//
// Created by axel on 20/04/23.
//

#ifndef PRUEBASPROYECTO_VENTANA_DIFICIL_H


#include "SerialStream.h"
#include "SerialStreamBuf.h"
#include "thread"
#include "SerialPortConstants.h"
#include "SFML/Graphics.hpp"
#include "Ship.h"
#include "Bullet.h"
#include "Enemigos.h"



#define PRUEBASPROYECTO_VENTANA_DIFICIL_H

using namespace sf;
using namespace std;

class Ventana_dificil: public Ship, public Bullet, public Enemigos{

public:
    LibSerial::SerialStream arduino;
    std::string input;
    ///metodos
    Ventana_dificil(Vector2f resolucion);
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

    RenderWindow *Ventanadificil;
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


#endif //PRUEBASPROYECTO_VENTANA_DIFICIL_H
