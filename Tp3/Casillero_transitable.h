#ifndef CASILLERO_TRANSITABLE_H_INCLUDED
#define CASILLERO_TRANSITABLE_H_INCLUDED
#include "Casillero.h"

class Casillero_transitable: public Casillero{

    public:

    Casillero_transitable(int coordenada_x, int coordenada_y);

    // Pre: -
    // Post: se imprimira por mantalla la representacion del casillero
    virtual void imprimir_representacion();

};

#endif // CASILLERO_TRANSITABLE_H_INCLUDED
