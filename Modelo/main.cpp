#include <iostream>

#include "../Vista_Controlador/Ventana_Principal.h"

int main() {

    srand(time(NULL));

    ventana_Principal * primer_ventana;         /// aqui se le da nombre a un nuevo objeto con la clase ventana
    primer_ventana = new ventana_Principal();        ///luego aca lo instancia con los parametros del constructor ventana_principal.

    return 0;
}
