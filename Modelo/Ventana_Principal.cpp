//
// Created by yonathanms on 08/04/23.
//

#include "../Vista_Controlador/VentanaFacil.h"
#include "../Vista_Controlador/Ventana_Principal.h" /// Importa el header de la clase ventana
#include "iostream"
ventana_Principal::ventana_Principal() {   /// este es el constructor de la clase y se usa en el main.cpp
    VentanaMenu = new RenderWindow(VideoMode(800,600),"Ventana Principal"); /// crea las dimensiones de la ventana
    VentanaMenu ->setFramerateLimit(60);  /// limita la ventana a 60 fps
    evento = new Event;
    botones();

    ciclo();   /// se le da ciclos a la ventana con el metodo "ciclo"


}

void ventana_Principal::botones() {
    btnFacil = new RectangleShape;
    btnFacil ->setSize(Vector2f(150,50));
    btnFacil ->setPosition(50,200);
    btnFacil ->setFillColor(Color::Green);

    btnMedio = new RectangleShape;
    btnMedio ->setSize(Vector2f(150,50));
    btnMedio ->setPosition(325,200);
    btnMedio ->setFillColor(Color::Yellow);

    btnDificil = new RectangleShape;
    btnDificil ->setSize(Vector2f(150,50));
    btnDificil ->setPosition(600,200);
    btnDificil ->setFillColor(Color::Red);

}
void ventana_Principal::eventos() {
    while (VentanaMenu->pollEvent(*evento)){
        switch (evento->type) {
            case Event::Closed:
                VentanaMenu->close();
                exit(1);

            case Event::MouseButtonPressed:
                Vector2i posicionmouse = Mouse::getPosition(*VentanaMenu);

                if (posicionmouse.x >= btnFacil->getPosition().x &&
                    posicionmouse.x <= btnFacil->getPosition().x + btnFacil->getSize().x &&
                    posicionmouse.y >= btnFacil->getPosition().y &&
                    posicionmouse.y <= btnFacil->getPosition().y + btnFacil->getSize().y) {
                    std::cout << "hola ventana nueva de modo facil xd" << std::endl;
                    VentanaMenu->close();
                    Ventana_Facil();

                }

                if (posicionmouse.x >= btnMedio->getPosition().x &&
                    posicionmouse.x <= btnMedio->getPosition().x + btnMedio->getSize().x &&
                    posicionmouse.y >= btnMedio->getPosition().y &&
                    posicionmouse.y <= btnMedio->getPosition().y + btnMedio->getSize().y){
                    std::cout<<"hola ventana nueva de modo Medio xd x2"<< std::endl;
                    VentanaMenu->close();
                }

                if (posicionmouse.x >= btnDificil->getPosition().x &&
                    posicionmouse.x <= btnDificil->getPosition().x + btnDificil->getSize().x &&
                    posicionmouse.y >= btnDificil->getPosition().y &&
                    posicionmouse.y <= btnDificil->getPosition().y + btnDificil->getSize().y){
                    std::cout<<"hola ventana nueva de modo Hardcore xd x3"<< std::endl;
                    VentanaMenu->close();
                }
        }
    }
}
void ventana_Principal::renderizar() {           /// este metodo lo que hace es dibujar, borra y muestra
    VentanaMenu ->clear();

    VentanaMenu ->draw(*btnFacil);
    VentanaMenu ->draw(*btnMedio);
    VentanaMenu ->draw(*btnDificil);

    VentanaMenu ->display();
}

void ventana_Principal::ciclo() {       /// este metodo lo que hace es un ciclo de constante renderizacion , o sea borra y dibuja constantemente solo si, esta abierta la ventana
    while (VentanaMenu->isOpen()){
        eventos();
        renderizar();
    }
}

