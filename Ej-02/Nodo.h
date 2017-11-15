#ifndef INC_05_HASH_NODO_H
#define INC_05_HASH_NODO_H

#include <iostream>

template <class T>
class Nodo{
private:
    T dato;
    Nodo<T> *next;

public:
    Nodo(){
        next = NULL;
    }
    Nodo(T d, Nodo* n){
        dato = d;
        next = n;
    }
    T getDato(){
        return dato;
    }
    void setDato(T d){
        dato = d;
    }
    Nodo<T> *getNext(){
        return next;
    }
    void setNext(Nodo<T> *n){
        next=n;
    }
};


#endif //INC_05_HASH_NODO_H
