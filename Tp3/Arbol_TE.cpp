#include "Arbol_TE.h"
#include <iostream>

using namespace std;

Arbol_TE::Arbol_TE(){

    raiz = NULL;
}

Tipo_edificio* Arbol_TE::insertar_nodo(Tipo_edificio* nodo, string nombre_tipo_edificio, Material materiales_requeridos[3], int cant_maxima){

    if(nodo == NULL){
        nodo = new Tipo_edificio(nombre_tipo_edificio, materiales_requeridos, cant_maxima);
    }
    else if(nombre_tipo_edificio > nodo-> devolver_nombre_tipo_edificio()){
        nodo-> obtener_rama_derecha(insertar_nodo(nodo-> devolver_rama_derecha(), nombre_tipo_edificio,  materiales_requeridos, cant_maxima), nodo);
    }
    else{
        nodo-> obtener_rama_izquierda(insertar_nodo(nodo-> devolver_rama_izquierda(), nombre_tipo_edificio,  materiales_requeridos, cant_maxima), nodo);
    }

    return nodo;
}

void Arbol_TE::insertar_nodo(string nombre_tipo_edificio, Material materiales_requeridos[3], int cant_maxima){

    raiz = insertar_nodo(raiz, nombre_tipo_edificio, materiales_requeridos, cant_maxima);

}

void Arbol_TE::imprimir_arbol_orden(Tipo_edificio* nodo){
    
    if(nodo != NULL){
        
        imprimir_arbol_orden(nodo-> devolver_rama_derecha());
        cout << "Edificio: " << nodo-> devolver_nombre_tipo_edificio() << endl;
        cout << endl;
        cout << "Materiales requeridos: " << endl;
        cout << "Piedra: " << nodo->devolver_material(0).devolver_cantidad_material() << endl;
        cout << "Madera: " << nodo->devolver_material(1).devolver_cantidad_material() << endl;
        cout << "Metal: " << nodo->devolver_material(2).devolver_cantidad_material() << endl;
        cout << endl;
        imprimir_arbol_orden(nodo-> devolver_rama_izquierda());
    }
}

void Arbol_TE::imprimir_arbol_orden(){

    imprimir_arbol_orden(raiz);
}

void Arbol_TE::limpiar_memoria(Tipo_edificio* nodo){

    if(nodo == NULL){
        return;
    }
    limpiar_memoria(nodo-> devolver_rama_derecha());
    limpiar_memoria(nodo-> devolver_rama_izquierda());
    delete nodo;
}

void Arbol_TE::limpiar_memoria(){

    limpiar_memoria(raiz);
}

Arbol_TE::~Arbol_TE(){

    limpiar_memoria();
}
