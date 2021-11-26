#ifndef NODO_H
#define NODO_H

#include <string>
using namespace std;


template <typename T>
class Nodo {
    // Atributos
private:
    string clave;
    T* elemento;
    Nodo<T>* izquierda;
    Nodo<T>* derecha;

public:
    //Constructor
    //PRE: -
    //POS: 
    Nodo(T*);

    ~Nodo();

    string getClave();
    T* getElemento();
    Nodo<T>* getIzquierda();
    Nodo<T>* getDerecha();

    void setClave(string);
    void setElemento(T*);
    void setIzquierda(Nodo<T>*);
    void setDerecha(Nodo<T>*);

};


template<typename T>
Nodo<T>::Nodo(T* elemento){
    this->elemento = elemento;
    this->izquierda = NULL;
    this->derecha = NULL;
}

template<typename T>
void Nodo<T>::setClave(string clave){
    this->clave = clave;
}

template<typename T>
void Nodo<T>::setElemento(T* elemento){
    this->elemento = elemento;
}

template<typename T>
void Nodo<T>::setIzquierda(Nodo<T>* izquierda){
    this->izquierda = izquierda;
}

template<typename T>
void Nodo<T>::setDerecha(Nodo<T>* derecha){
    this->derecha = derecha;
}


template<typename T>
string Nodo<T>::getClave(){
    return this->clave;
}

template<typename T>
T* Nodo<T>::getElemento(){
    return this->elemento;
}

template<typename T>
Nodo<T>* Nodo<T>::getIzquierda(){
    return this->izquierda;
}

template<typename T>
Nodo<T>* Nodo<T>::getDerecha(){
    return this->derecha;
}



#endif //NODO_H