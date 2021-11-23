#ifndef INVENTARIO_H_INCLUDED
#define INVENTARIO_H_INCLUDED
#include "Material.h"
#include <string>

class Inventario{

    private:

    Material *materiales;
    int cant_tipo_materiales;
    
    public:

    // Pre: -
    // Post: Inicializa el inventario.
    Inventario();
    
    // Pre: -
    // Post: Agrega un material al inventario.
    void agregar_material(std::string nombre_material, int cantidad_material);

    // Pre: -
    // Post: Devuelve el material por posicion.
    Material devolver_material(int posicion);

    // Pre: -
    // Post: Devuelve todos los materiales.
    Material *devolver_materiales();

    // Pre:
    // Post: Limpia la memoria de materiales.
    void limpiar_memoria();

    // Pre: -
    // Post: Crea el vector dinamico de materiales.
    void crear_vector_materiales();

    // Pre: -
    // Post: Devuelve la cantidad de tipo de materiales.
    int devolver_cant_tipo_materiales();
    
    // Pre: -
    // POst: Muestra por pantalla el inventario.
    void mostrar_inventario();
    
};

#endif // INVENTARIO_H_INCLUDED