#ifndef LIOSTAPECVIR_H
#define LIOSTAPECVIR_H

#include <sstream>
#include <QRandomGenerator>

#include <cstdlib>
#include <iostream>
using namespace std;

struct PecadoVirtud {
       int cantidad;
       string nombre;
       PecadoVirtud* siguiente;

       PecadoVirtud(int _cantHacer, string _nombre) {
         cantidad = _cantHacer;
         nombre = _nombre;
         siguiente = NULL;
       }
};


struct ListaPecVir {
    PecadoVirtud *primerNodo, *ultimoNodo;

    ListaPecVir();

    void insertarAlInicio (int cantidad, string nombre);
    void insertarAlFinal(int cantidad, string nombre);
    int cantidadPecVir();
    void modificarCantidad();
    int total();
    string imprimir();

};


#endif // LIOSTAPECVIR_H
