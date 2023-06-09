//
// Created by axel on 20/04/23.
//

#include "../Vista_Controlador/Ventana_dificil.h"
/***
 *  @author Axel Flores.
 *
 *  @brief  Constructor de la clase Ventana.
 *
 *  Instancia elementos de la interfaz gráfica y temporizadores
 *
 * @param resolucion Par ordenado que representa la dimensión de toda la ventana para este modo
 */

Ventana_dificil::Ventana_dificil(Vector2f resolucion) {
    GameOver = false;

    Ventanadificil = new RenderWindow(VideoMode(resolucion.x, resolucion.y), "Game Mode: dificil");
    Ventanadificil->setFramerateLimit(70);
    evento = new Event;

    Reloj_Ventana = new Clock;
    TiempoTranscurrido = new Time;
    Reloj_Ventana2 = new Clock;
    TiempoTranscurrido2= new Time;

    num_bala = 200;
    balas[num_bala] = Bullet();

    num_random1 = rand()% 6+0;
    num_random2 = rand()% 6+0;
    num_random3 = rand()% 6+0;

    num_enemyAUX = 6;
    num_enemy = 6;
    enemys[num_enemy] = Enemigos();

    arduino.Open("/dev/ttyACM0"); // Reemplazar por el puerto correspondiente
    arduino.SetBaudRate(LibSerial::BaudRate::BAUD_9600);
    arduino.SetStopBits(LibSerial::StopBits::STOP_BITS_1);
    arduino.SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);
    ciclo();
}

/***
 * @brief Método de escucha.
 *
 * Este método permite que el programa esté constantemente escuchando las ordernes del usuario
 */

void Ventana_dificil::LeerArduino() {

    while (true) {
        getline(arduino, input);
        std::cout << "valor: " << input << std::endl;
        if (input != "") {
            std::cout << "moviendo hacia arriba: " << input << std::endl;
            MoveS(1);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        } else if (input == "") {
            std::cout << "moviendo hacia abajo: " << input << std::endl;
            MoveS(0);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
    }
}


void Ventana_dificil::eventos() {
    while (Ventanadificil->pollEvent(*evento)) {
        switch (evento->type) {
            case Event::Closed:
                Ventanadificil->close();
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
void Ventana_dificil::renderizar() {
    Ventanadificil->clear();
    Ventanadificil->draw(GetSprShip());  //obtiene el sprite de la nave  del "ship.h" por medio de herencia
    Ventanadificil->draw(GetSpriteEnemy(1));

    // metodo que dibuja las balas
    RenderBullets();
    //Metodo que dibuja las naves
    RenderEnemys();

    Ventanadificil->display();
}

/***
 * @brief Ciclo
 *
 * Esta función es un ciclo constante, es decir , actualiza lo que va sucediendo en la interfaz gráfica.
 */
void Ventana_dificil::ciclo(){
    std::function<void()> funcionLeerArduino = std::bind(&Ventana_dificil::LeerArduino, this);
    std::thread hiloArduino(funcionLeerArduino);
    while (Ventanadificil->isOpen()){
        eventos();
        renderizar();
    }
    hiloArduino.join();
}

/***
 * @brief RenderBullets
 *
 * Este método muestra una ráfaga de 4 balas, lo hace instanciando 4 objetos de tipo bala y los muestra de forma independiente
 * por unos segundos, una vez pasado el tiempo , se instancian las demás balas y se reduce el cartucho.
 */
void Ventana_dificil::RenderBullets() {
    *TiempoTranscurrido = Reloj_Ventana->getElapsedTime();

    //cout<<"Bala detectada en campo de vision "<<num_bala-1<<" Posicion actual x = "<<balas[num_bala-1].GetPosXbullet()<<endl;
    // cout<<TiempoTranscurrido->asSeconds()<<endl;

    if (TiempoTranscurrido->asSeconds()<5){

        if (num_bala>=0){
            if (TiempoTranscurrido->asSeconds()<4) {
                Ventanadificil->draw(balas[num_bala-1].getSprtBullet());
                balas[num_bala-1].Movebullet(GetPositionShip_Y());
            }
            if (TiempoTranscurrido->asSeconds()>1 and TiempoTranscurrido->asSeconds()<5){
                Ventanadificil->draw(balas[num_bala-2].getSprtBullet());
                balas[num_bala-2].Movebullet(GetPositionShip_Y());
            }
            if (TiempoTranscurrido->asSeconds()>2 and TiempoTranscurrido->asSeconds()<5){
                Ventanadificil->draw(balas[num_bala-3].getSprtBullet());
                balas[num_bala-3].Movebullet(GetPositionShip_Y());
            }
            if (TiempoTranscurrido->asSeconds()>3 and TiempoTranscurrido->asSeconds()<5){
                Ventanadificil->draw(balas[num_bala-4].getSprtBullet());
                balas[num_bala-4].Movebullet(GetPositionShip_Y());
            }

        }
        else{
            cout<<"municion descargada"<<endl;
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
int Ventana_dificil::Reduccion_Bullets(int num_actual) {
    return num_actual-4;
}

void Ventana_dificil::RenderEnemys() {
    *TiempoTranscurrido2 = Reloj_Ventana2->getElapsedTime();

    //cout<<"Bala detectada en campo de vision "<<num_bala-1<<" Posicion actual x = "<<balas[num_bala-1].GetPosXbullet()<<endl;
    // cout<<TiempoTranscurrido->asSeconds()<<endl;

    if (TiempoTranscurrido2->asSeconds()<=10){

        if (num_enemy>0){
            if (TiempoTranscurrido2->asSeconds()<10) {
                Ventanadificil->draw(enemys[num_enemy-1].GetSpriteEnemy(1));
                enemys[num_enemy-1].MoveEnemy(num_random1,1.01);
            }
            if (TiempoTranscurrido2->asSeconds()>1 and TiempoTranscurrido2->asSeconds()<10){
                Ventanadificil->draw(enemys[num_enemy-2].GetSpriteEnemy(1));
                enemys[num_enemy-2].MoveEnemy(num_random2,1.01);
            }
            if (TiempoTranscurrido2->asSeconds()>2 and TiempoTranscurrido2->asSeconds()<10){
                Ventanadificil->draw(enemys[num_enemy-3].GetSpriteEnemy(1));
                enemys[num_enemy-3].MoveEnemy(num_random3,1.01);

                cout<<num_enemy<<endl;
            }

        }
        if (num_enemy==0)
        {
            num_enemy=num_enemyAUX;
            cout<<"fase superada"<<endl;
        }
    }
    else{
        num_enemy = Reduccion_Enemys(num_enemy);
        cout<<num_enemy<<endl;
        Reloj_Ventana2->restart();
    }
}

int Ventana_dificil::Reduccion_Enemys(int num_actual) {
    return num_actual-3;
}
