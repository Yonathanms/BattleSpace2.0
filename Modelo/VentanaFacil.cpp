//
// Created by yonathanms on 15/04/23.
//


#include "../Vista_Controlador/VentanaFacil.h"
#include "iostream"

/***
 *  @author Axel Flores.
 *
 *  @brief  Constructor de la clase Ventana.
 *
 *  Instancia elementos de la interfaz gráfica y temporizadores
 *
 * @param resolucion Par ordenado que representa la dimensión de toda la ventana para este modo
 */
Ventana_Facil::Ventana_Facil(Vector2f resolucion) {
    GameOver = false;

    VentanaFacil = new RenderWindow(VideoMode(resolucion.x, resolucion.y), "Game Mode: Facil");
    VentanaFacil->setFramerateLimit(70);
    evento = new Event;

    Reloj_Ventana = new Clock;
    TiempoTranscurrido = new Time;

    num_bala = 200;
    balas[num_bala] = Bullet();

    ciclo();
}

/***
 * @brief Método de escucha.
 *
 * Este método permite que el programa esté constantemente escuchando las ordernes del usuario
 */

void Ventana_Facil::eventos() {
    while (VentanaFacil->pollEvent(*evento)) {
        switch (evento->type) {
            case Event::Closed:
                VentanaFacil->close();
                std::cout << "Ventana facil cerrada de forma exitosa" << std::endl;
                exit(1);

            case Event::KeyPressed:
                if (Keyboard::isKeyPressed(Keyboard::W)) {
                    MoveS(1);                                /// al apretar 'w' ingresa un '1' en la funcion de movimiento de la nave
                }
                if (Keyboard::isKeyPressed(Keyboard::S)){
                    MoveS(0);                              /// al apretar 'w' ingresa un '0' en la funcion de movimiento de la nave
                }
        }
    }
}


/***
 * @brief Renderizar
 *
 * Se trata de un método que dibuja los elementos que se encuentren dentro de el, para hacerlo, se debe colocar en el ciclo, para que
 * el dibujado sea de forma constante y actualice las posiciones de los objetos.
 */
void Ventana_Facil::renderizar() {
    VentanaFacil->clear();
    VentanaFacil->draw(GetSprShip());  //obtiene el sprite de la nave  del "ship.h" por medio de herencia
    VentanaFacil->draw(GetSpriteEnemy(1));

    // metodo que dibuja las balas
    RenderBullets();


    VentanaFacil->display();
}

/***
 * @brief Ciclo
 *
 * Esta función es un ciclo constante, es decir , actualiza lo que va sucediendo en la interfaz gráfica.
 */
void Ventana_Facil::ciclo(){
    while (VentanaFacil->isOpen()){
        eventos();
        renderizar();
    }
}

/***
 * @brief RenderBullets
 *
 * Este método muestra una ráfaga de 4 balas, lo hace instanciando 4 objetos de tipo bala y los muestra de forma independiente
 * por unos segundos, una vez pasado el tiempo , se instancian las demás balas y se reduce el cartucho.
 */
void Ventana_Facil::RenderBullets() {
    *TiempoTranscurrido = Reloj_Ventana->getElapsedTime();

    //cout<<"Bala detectada en campo de vision "<<num_bala-1<<" Posicion actual x = "<<balas[num_bala-1].GetPosXbullet()<<endl;
   // cout<<TiempoTranscurrido->asSeconds()<<endl;

    if (TiempoTranscurrido->asSeconds()<5){

        if (num_bala>=0){
            if (TiempoTranscurrido->asSeconds()<4) {
                VentanaFacil->draw(balas[num_bala-1].getSprtBullet());
                balas[num_bala-1].Movebullet(GetPositionShip_Y());
            }
            if (TiempoTranscurrido->asSeconds()>1 and TiempoTranscurrido->asSeconds()<5){
                VentanaFacil->draw(balas[num_bala-2].getSprtBullet());
                balas[num_bala-2].Movebullet(GetPositionShip_Y());
            }
            if (TiempoTranscurrido->asSeconds()>2 and TiempoTranscurrido->asSeconds()<5){
                VentanaFacil->draw(balas[num_bala-3].getSprtBullet());
                balas[num_bala-3].Movebullet(GetPositionShip_Y());
            }
            if (TiempoTranscurrido->asSeconds()>3 and TiempoTranscurrido->asSeconds()<5){
                VentanaFacil->draw(balas[num_bala-4].getSprtBullet());
                balas[num_bala-4].Movebullet(GetPositionShip_Y());
            }

        }
        else{
            //cout<<"municion descargada"<<endl;
        }
    }
    else{
        num_bala = Reduccion_Bullets(num_bala);
        //cout<<num_bala<<endl;
        Reloj_Ventana->restart();
    }
}

/***
 * @brief Reduccion_Bullets
 *
 * Es un método auxiliar el cual cambia el número de referencia de las balas.
 *
 * @param num_actual es el número de referencia del arreglo donde se encuentran los objetos bala
 * @return un nuevo numero de referencia
 */
int Ventana_Facil::Reduccion_Bullets(int num_actual) {
    return num_actual-4;
}






