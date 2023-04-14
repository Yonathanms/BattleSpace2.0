//
// Created by yonathanms on 08/04/23.
//

#include "../Vista_Controlador/Ventana_Principal.h" /// Importa el header de la clase ventana

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

