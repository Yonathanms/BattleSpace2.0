//
// Created by yonathanms on 08/04/23.
//

#include "../Vista_Controlador/Ventana_Principal.h"

ventana_Principal::ventana_Principal(int dimension_x, int dimension_y) {
    fps = 60;
    VentanaMenu = new RenderWindow(VideoMode(dimension_x,dimension_y),"Ventana Principal");
    VentanaMenu ->setFramerateLimit(fps);
    ciclo();

}
void ventana_Principal::renderizar() {

    VentanaMenu ->display();
    VentanaMenu ->clear();
}

void ventana_Principal::ciclo() {
    while (VentanaMenu->isOpen()){
        renderizar();
    }
}

