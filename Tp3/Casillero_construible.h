#ifndef CASILLERO_CONSTRUIBLE_H_INCLUDED
#define CASILLERO_CONSTRUIBLE_H_INCLUDED
#include "Casillero.h"

class Casillero_construible: public Casillero{

    public:

    Casillero_construible(int coordenada_x, int coordenada_y);

    // Pre: -
    // Post: se imprimira por mantalla la representacion del casillero
    void imprimir_representacion();


};

#endif // CASILLERO_CONSTRUIBLE_H_INCLUDED