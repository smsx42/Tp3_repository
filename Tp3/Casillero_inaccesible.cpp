#include "Casillero_inaccesible.h"
#include "constantes.h"
#include <iostream>

Casillero_inaccesible::Casillero_inaccesible(int coordenada_x, int coordenada_y){

    this-> coordenada_x = coordenada_x;
    this-> coordenada_y = coordenada_y;
    representacion = LAGO;

}

void Casillero_inaccesible::imprimir_representacion(){

    if(representacion == LAGO){
        std::cout << LAGO;

    }

}