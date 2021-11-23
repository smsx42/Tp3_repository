#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
#include "Casillero.h"
#include "Casillero_construible.h"
#include "Casillero_transitable.h"
#include "Casillero_inaccesible.h"

class Mapa{

    private:
    
    Casillero *** mapa;
    int cant_filas;
    int cant_columnas;

    public:

    // Pre: -
    // Post: Inicializa el mapa.
    Mapa();

    // Pre: -
    // Post: Se obtienen las filas y las columnas del mapa.
    void obtener_filas_columnas(int cant_filas, int cant_columnas);

    // Pre: -
    // Post: Crea un mapa dinamico en forma de matriz.
    void crear_mapa();

    // Pre: -
    // Post: Asigna una clase de casillero dependiendo de la representacion y guarda las coordenadas.
    void asignar_casillero(int coordenada_x, int coordenada_y, char representacion);

    // Pre: -
    // Post: Muestra por pantalla el mapa.
    void mostrar_mapa();

    // Pre: -
    // Post: Devuelve el mapa.
    Casillero*** devolver_mapa();

    // Pre: -
    // Post: Limpia la memoria del mapa.
    void limpiar_matriz();

};

#endif // MAPA_H_INCLUDED