#include "Casillero_transitable.h"
#include "constantes.h"
#include <iostream>

Casillero_transitable::Casillero_transitable(int coordenada_x, int coordenada_y){

    this-> coordenada_x = coordenada_x;
    this-> coordenada_y = coordenada_y;
    representacion = CAMINO;

}

void Casillero_transitable::imprimir_representacion(){

    if(representacion == CAMINO){
        std::cout << CAMINO;

    }

}