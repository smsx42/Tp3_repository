#ifndef DICCIONARIO_H
#define DICCIONARIO_H
#include <stdbool.h>
#include <string>

#include "nodo.h"

const int ERROR = -1;
const int EXITO = 0;

template <typename T>
class Diccionario
{
    private:
        Nodo<T>* raiz;
        
    public:

		//PRE:
		//POS: Construye el Diccionarioor instanciando la cnatidad en 0 y los datos en NULL
        Diccionario();

		//PRE:
		//POS: Libera la memoria de todo su contenido
        ~Diccionario();

		//PRE: Recibe un dato tipo T
		//POS: Agregar el dato al Diccionario retornando 0 en caso de exito sino -1(ERROR)
        int insertar(string, T*);

		//PRE:
		//POS: Busca en el árbol el elemento y lo borra, devuelve 0 si pudo eliminarlo y sino -1
        int borrar(T*);

        //PRE:
        //POS: Devuelve el elemento encontrado o sino NULL sino lo encuentra
        T* buscar(string);

        //PRE:
        //POS: Devuelve el elmento almacenado en la raiz o NULL si el árbol está vacío o no existe
        T* getRaiz();

        //PRE:
        //POS: Devuelve true si el árbol está vacío o el árbol es null, false si el árbol tiene elementos
        bool estaVacio();

		//PRE: 
		//POS: Muestra todos los datos que tiene en modo inorder
        void mostrarInorder();

        //PRE: 
		//POS: Muestra todos los datos que tiene en modo inorder
        void mostrarPreorden();

        //PRE: 
		//POS: Muestra todos los datos que tiene en modo inorder
        void mostrarPostorden();

    private:

        Nodo<T>* insertar_t(Nodo<T>*, string clave, T* nuevoNodo);
        Nodo<T>* buscar_t(Nodo<T>*, string clave);


};


//-------------------------------------FUNCIONES PRIVADAS---------------------------------------------
template<typename T>
Nodo<T>* Diccionario<T>::insertar_t(Nodo<T>* nodo, string clave,  T* dato){
    if(!nodo){
        nodo = new Nodo<T>(dato);
        nodo->setClave(clave);
        
    }else{
        if( clave > nodo->getClave() || nodo->getClave() == clave){
            nodo->setDerecha(this->insertar_t(nodo->getDerecha(), clave, dato));
        }else
            nodo->setIzquierda(this->insertar_t(nodo->getIzquierda(), clave, dato));
    }
    return nodo;

}

template<typename T>
Nodo<T>* Diccionario<T>::buscar_t(Nodo<T>* nodo, string clave){
    if(!nodo || nodo->getClave() == clave){
        return nodo;
    }else if(clave > nodo->getClave()){
        return buscar_t(nodo->getDerecha(), clave);
    }else{
        return buscar_t(nodo->getIzquierda(), clave);
    }
}


template<typename T>
Diccionario<T>::Diccionario(){
    this->raiz = NULL;
}

template<typename T>
Diccionario<T>::~Diccionario(){
	if(this->datos){
		for(int pos = 0; pos < this->cantidad; pos++){
			delete this->datos[pos];
		}
	}
	delete[] this->datos;
}

template<typename T>
int Diccionario<T>::insertar(string clave, T* dato){
    if(!dato || clave == "" ) return ERROR;
    this->raiz = this->insertar_t(this->raiz, clave, dato);
    return EXITO;
}

template<typename T>
T* Diccionario<T>::getRaiz(){
    if(this->estaVacio()) return NULL;
    return this->raiz->getElemento();
}

template<typename T>
bool Diccionario<T>::estaVacio(){
    return (!this->raiz);
}

template<typename T>
T* Diccionario<T>::buscar(string clave){
    if(clave == "") return NULL;
    Nodo<T>* nodoBuscado = this->buscar_t(this->raiz, clave);
    if(!nodoBuscado) return NULL;
    return (!nodoBuscado)? NULL : nodoBuscado->getElemento();

}



#endif //DICCIONARIO_H

