#ifndef LISTAHASHMAP_H
#define LISTAHASHMAP_H

#include "persona.h"
#include <cstdlib>
#include <iostream>
#include "QDate"
using namespace std;

struct NodoHashMap {
       int key;
       NodoHashMap* siguiente;

       NodoHashMap(int _key) {
         key = _key;
         siguiente = NULL;
       }
};


struct ListaHashMap {

    QString m_date = QDate::currentDate().toString();
    string date = m_date.toStdString();

    string datosThanos = "";
    string datTotThanos= "";
    int elimThanos = 0;
    int totalElimThanos = 0;


    NodoHashMap *primerNodo, *ultimoNodo;

    ListaHashMap();

    void insertarAlInicio (int _key);
    Persona* encontrarPorID(ListaDoble *personas, int id);
    void matarPersonas(ListaDoble *personas);
    void insertarAlFinal(int _key);

};


#endif // LISTAHASHMAP_H
