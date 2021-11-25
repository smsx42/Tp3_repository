#include <iostream>
#include "Tipo_edificio.h"

using namespace std;

Tipo_edificio::Tipo_edificio(string nombre_tipo_edificio, Material materiales_requeridos[CANT_MAX_MATERIALES], int cant_maxima){

    this->nombre_tipo_edificio = nombre_tipo_edificio;
    this->cant_maxima = cant_maxima;
    
    for(int i = 0; i < CANT_MAX_MATERIALES; i++){
        this-> materiales_requeridos[i] = materiales_requeridos[i];
    }
    rama_derecha = NULL;
    rama_izquierda = NULL;
    pariente = NULL;
}

void Tipo_edificio::inicializar_vector_materiales(){

    for (int i = 0; i < CANT_MAX_MATERIALES; i++){

        materiales_requeridos[i].obtener_material("-", 0);
    }
}

void Tipo_edificio::obtener_tipo_edificio(string nombre_edificio, int cant_maxima, Material materiales_requeridos[CANT_MAX_MATERIALES]){

    this->nombre_tipo_edificio = nombre_tipo_edificio;
    this->cant_maxima = cant_maxima;

    for (int i = 0; i < CANT_MAX_MATERIALES; i++){

        this->materiales_requeridos[i].obtener_material(materiales_requeridos[i].devolver_tipo_material(), materiales_requeridos[i].devolver_cantidad_material());
    }
}

string Tipo_edificio::devolver_nombre_tipo_edificio(){

    return nombre_tipo_edificio;
}

int Tipo_edificio::devolver_cant_maxima(){

    return cant_maxima;
}

Material *Tipo_edificio::devolver_materiales(){

    return materiales_requeridos;
}

Material Tipo_edificio::devolver_material(int posicion){

    return materiales_requeridos[posicion];
}

//--------------------Nodo----------------------

void Tipo_edificio::obtener_rama_derecha(Tipo_edificio *rama_derecha, Tipo_edificio *pariente){

    this->rama_derecha = rama_derecha;
    this->pariente = pariente;
}

void Tipo_edificio::obtener_rama_izquierda(Tipo_edificio *rama_izquierda, Tipo_edificio *pariente){

    this->rama_izquierda = rama_izquierda;
    this->pariente = pariente;
}

void Tipo_edificio::obtener_rama_derecha(Tipo_edificio *rama_derecha){

    this->rama_derecha = rama_derecha;
}

void Tipo_edificio::obtener_rama_izquierda(Tipo_edificio *rama_izquierda){

    this->rama_izquierda = rama_izquierda;
}

void Tipo_edificio::obtener_pariente(Tipo_edificio *pariente){

    this->pariente = pariente;
}

Tipo_edificio *Tipo_edificio::devolver_rama_derecha(){

    return rama_derecha;
}

Tipo_edificio *Tipo_edificio::devolver_rama_izquierda(){

    return rama_izquierda;
}

Tipo_edificio *Tipo_edificio::devolver_pariente(){

    return pariente;
}

bool Tipo_edificio::verificar_hoja(){

    return (devolver_rama_derecha() == NULL && devolver_rama_izquierda() == NULL);
}

bool Tipo_edificio::verificar_hijo_derecha(){

    return (devolver_rama_derecha() == NULL && devolver_rama_izquierda() != NULL);
}

bool Tipo_edificio::verificar_hijo_izquierda(){

    return (devolver_rama_derecha() != NULL && devolver_rama_izquierda() == NULL);
}
