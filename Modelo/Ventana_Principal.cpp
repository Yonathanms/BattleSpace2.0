//
// Created by yonathanms on 08/04/23.
//

#include "../Vista_Controlador/Ventana_Principal.h" /// Importa el header de la clase ventana

ventana_Principal::ventana_Principal(int dimension_x, int dimension_y) {   /// este es el constructor de la clase y se usa en el main.cpp
    fps = 60;     /// se le da el valor del atributo fps
    VentanaMenu = new RenderWindow(VideoMode(dimension_x,dimension_y),"Ventana Principal"); /// crea las dimensiones de la ventana
    VentanaMenu ->setFramerateLimit(fps);  /// limita la ventana a 60 fps
    ciclo();   /// se le da ciclos a la ventana con el metodo "ciclo"

}
void ventana_Principal::renderizar() {           /// este metodo lo que hace es dibujar, borra y muestra
    VentanaMenu ->clear();
    VentanaMenu ->display();
}

void ventana_Principal::ciclo() {       /// este metodo lo que hace es un ciclo de constante renderizacion , o sea borra y dibuja constantemente solo si, esta abierta la ventana
    while (VentanaMenu->isOpen()){
        renderizar();
    }
}

