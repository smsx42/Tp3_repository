#ifndef MATERIAL_H_INCLUDED
#define MATERIAL_H_INCLUDED
#include <string>

class Material{

    private:

    std::string tipo_material;
    int cantidad_material;

    public:

    // Pre: -
    // Post: Inicializa el material.
    Material();

    // Pre: -
    // Post: Obtiene el nombre del tipo de material y su cantidad.
    void obtener_material(std::string tipo_material, int cantidad_material);

    // Pre: -
    // Post: Devuelve el nombre del tipo de material.
    std::string devolver_tipo_material();

    // Pre: -
    // Post: Devuelve la cantidad del material.
    int devovler_cantidad_material();

};


#endif // MATERIAL_H_INCLUDED