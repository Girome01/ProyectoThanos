#ifndef ARBOL_H
#define ARBOL_H

struct ListaDoble;
#include "listadoble.h"

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include <QList>
using namespace std;

struct NodoArbol{
       NodoPersona* persona;
       NodoArbol* hijoizquierdo;
       NodoArbol* hijoderecho;

       NodoArbol(NodoPersona* _persona){
            persona = _persona;
            hijoizquierdo = hijoderecho = NULL;
       }
};

struct Arbol{
    NodoArbol* raiz;
    QList<int> posiciones = {};
    Arbol();

    int obtenerPor(int largoLista);
    void crearArray(int _posicion, int largoLista);
    void crearArbol(QList<int> lista, ListaDoble* personas, NodoArbol* nodo);
    void imprimirArray();
    QList<int> listaMenores(QList<int> _posiciones, int pos);
    QList<int> listaMayores(QList<int> _posiciones, int pos);
    void inOrden(NodoArbol* nodo);
};

#endif // ARBOL_H