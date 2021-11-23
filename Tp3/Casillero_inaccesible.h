#ifndef CASILLERO_INACCESIBLE_H_INCLUDED
#define CASILLERO_INACCESIBLE_H_INCLUDED
#include "Casillero.h"

class Casillero_inaccesible: public Casillero{

    public:

    Casillero_inaccesible(int coordenada_x, int coordenada_y);

    // Pre: -
    // Post: se imprimira por mantalla la representacion del casillero
    void imprimir_representacion();
};

#endif // CASILLERO_INACCESIBLE_H_INCLUDED