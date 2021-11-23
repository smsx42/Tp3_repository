#ifndef CONSTRUCCION_H_INCLUDED
#define CONSTRUCCION_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
#include "constantes.h"
#include "Jugador.h"
#include "Mapa.h"

void cargar_inventario(Jugador &jugador_1, Jugador &jugador_2);

void cargar_jugador(Jugador &jugador_1, Jugador &jugadior_2);

void empezar_programa();

void generar_opciones(Jugador jugador_1, Jugador jugador_2);

void volver_menu();

void cargar_mapa(Jugador &juagor_1, Jugador &jugador_2);


#endif // CONSTRUCCION_H_INCLUDED