#include "Mapa.h"
#include "constantes.h"
#include <iostream>

using namespace std;

Mapa::Mapa(){

    cant_filas = 0;
    cant_columnas = 0;

}

void Mapa::obtener_filas_columnas(int cant_filas, int cant_columnas){

    this-> cant_filas = cant_filas;
    this-> cant_columnas = cant_columnas;

}

void Mapa::crear_mapa(){

    mapa = new Casillero**[cant_filas];

    for(int i = 0; i < cant_filas; i++){
         
        mapa[i] = new Casillero*[cant_columnas];   
    }

    for(int i = 0; i < cant_filas; i++){
        for(int j = 0; j < cant_columnas; j++){
            mapa[i][j] = nullptr;
        }
    }

}

void Mapa::asignar_casillero(int coordenada_x, int coordenada_y, char representacion){

    if(representacion == LAGO){
        mapa[coordenada_x][coordenada_y] = new Casillero_inaccesible(coordenada_x, coordenada_y);
    }
    else if(representacion == CAMINO){
        mapa[coordenada_x][coordenada_y] = new Casillero_transitable(coordenada_x, coordenada_y);
    }
    else if(representacion == CONSTRUIBLE){
        mapa[coordenada_x][coordenada_y] = new Casillero_construible(coordenada_x, coordenada_y);
    }
}

void Mapa::mostrar_mapa(){

    for(int i = 0; i < cant_filas; i++){
        for(int j = 0; j < cant_columnas; j++){
            mapa[i][j]->imprimir_representacion();
            cout << " ";
        }
        cout << endl;
    }

}

Casillero*** Mapa::devolver_mapa(){

    return mapa;

}

void Mapa::limpiar_matriz(){

    for(int i = 0; i < cant_filas; i++){
        for(int j = 0; j < cant_columnas; j++){
            delete mapa[i][j];
        }
    }

    for(int i = 0; i < cant_filas; i++){
        delete[] mapa[i];
        mapa[i] = nullptr;
    }

    delete[] mapa;
    mapa = nullptr;

}