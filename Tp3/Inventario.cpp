#include "Inventario.h"
#include <iostream>

using namespace std;

Inventario::Inventario(){

    cant_tipo_materiales = 0;
    
    crear_vector_materiales();
}

void Inventario::crear_vector_materiales(){

    materiales = new Material[cant_tipo_materiales + 1];
}


void Inventario::agregar_material(string nombre, int cantidad_material){

    materiales[cant_tipo_materiales].obtener_material(nombre, cantidad_material);

    cant_tipo_materiales ++;

    Material *vector_copia;
    vector_copia = new Material[cant_tipo_materiales];


    for(int i = 0; i < cant_tipo_materiales; i++){
        vector_copia[i] = materiales[i];
    }

    delete[] materiales;
    materiales = nullptr;
    
    crear_vector_materiales();

    for(int i = 0; i < cant_tipo_materiales; i++){
        materiales[i] = vector_copia[i];
    }

    delete[] vector_copia;
    vector_copia = nullptr;
}

void Inventario::limpiar_memoria(){

    delete[] materiales;
    materiales = nullptr;

}

Material* Inventario::devolver_materiales(){

    return materiales;
}

int Inventario::devolver_cant_tipo_materiales(){

    return cant_tipo_materiales;
}

Material Inventario::devolver_material(int posicion){

    return materiales[posicion];
}

void Inventario::mostrar_inventario(){

    for(int i = 0; i < cant_tipo_materiales; i++){
        cout << "Material: " << materiales[i].devolver_tipo_material() << endl;
        cout << "Cantidad: " << materiales[i].devovler_cantidad_material() << endl;
    }

}