#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include "Inventario.h"
#include "Mapa.h"

class Jugador{

    private:

    Inventario inventario;
    Mapa mapa;

    public:
    

    // Pre: EL invnetario esta bien cargado.
    // Post: Se obtiene el inventario del jugador.
    void obtener_invnetario(Inventario inventario);
    
    // Pre: -
    // Post: Devuelve el inventario del jugador.
    Inventario devolver_invnetario();
    
    // Pre: El mapa esta bien cargado.
    // Post: Se obtiene el mapa del jugador.
    void obtener_mapa(Mapa mapa);

    // Pre: -
    // Post: Devuelve el mapa.
    Mapa devolver_mapa();

    // Pre: -
    // Post: Limpia la memoria dinamica de los materiales dependindo del inventario del juagador.
    void limpiar_inventario();

    // Pre: -
    // Post: Limpia la memoria del mapa.
    void limpiar_mapa();


};

#endif // JUGADOR_H_INCLUDED