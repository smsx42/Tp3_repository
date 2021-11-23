#include "Casillero_construible.h"
#include "constantes.h"
#include <iostream>

Casillero_construible::Casillero_construible(int coordenada_x, int coordenada_y){

    this-> coordenada_x = coordenada_x;
    this-> coordenada_y = coordenada_y;
    representacion = CONSTRUIBLE;

}

void Casillero_construible::imprimir_representacion(){

    if(representacion == CONSTRUIBLE){
        std::cout << CONSTRUIBLE;
    }

}