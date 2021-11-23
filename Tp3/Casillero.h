#ifndef CASILLERO_H_INCLUDED
#define CASILLERO_H_INCLUDED

class Casillero{

    protected:

    char representacion;
    int coordenada_x;
    int coordenada_y;

    public:

    // Pre: -
    // Post: Se obtiene la representacion del casillero.
    void obtener_representacion(char representacion);

    // Pre: -
    // Post: se imprimira por mantalla la representacion del casillero
    virtual void imprimir_representacion() = 0;

};

#endif // CASILLERO_H_INCLUDED