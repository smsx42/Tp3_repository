#include "Jugador.h"


void Jugador::obtener_invnetario(Inventario invnetario){
    
    inventario.limpiar_memoria();
    this-> inventario = invnetario;
}

Inventario Jugador::devolver_invnetario(){

    return inventario;
}

void Jugador::obtener_mapa(Mapa mapa){

    this-> mapa = mapa;
}

Mapa Jugador::devolver_mapa(){
   
    return mapa;
}

void Jugador::limpiar_inventario(){

    delete[] inventario.devolver_materiales();

}

void Jugador::limpiar_mapa(){

    mapa.limpiar_matriz();
}
