#include "Material.h"

using namespace std;

Material::Material(){

    tipo_material = "-";
    cantidad_material = 0;
}

void Material::obtener_material(string tipo_material, int cantidad_material){

    this-> tipo_material = tipo_material;
    this-> cantidad_material = cantidad_material;

}

string Material::devolver_tipo_material(){

    return tipo_material;
}

int Material::devovler_cantidad_material(){

    return cantidad_material;
}