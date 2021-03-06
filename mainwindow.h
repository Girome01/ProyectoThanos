#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "persona.h"
#include "archivo.h"
#include "arbol.h"
#include "listadoble.h"
#include "eliminarhumanos.h"
#include "consultamundo.h"
#include "salvahumanos.h"
#include "hashmap.h"
#include "personatest.h"

#include <QDate>
#include <QTime>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Arbol* arbol;
    ListaDoble* mundo = new ListaDoble();
    EliminarHumanos elimHumanos = EliminarHumanos();
    ConsultaMundo* consultas = new ConsultaMundo(mundo,arbol);
    Archivo* archivo = new Archivo();
    salvaHumanos* salvarHum;
    HashMap* thanos = new HashMap(mundo);
    PersonaTest *personaTest=new PersonaTest(mundo);


    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnMostrarArbol_clicked();

    void on_btnEliminar_clicked();

    void on_btnSalvar_clicked();

    void on_btnCrearHumanos_clicked();

    void on_btnEnviarCorreo_clicked();

    void on_btnBuscar_clicked();

    void on_btnPecar_clicked();

    void on_btnBuenasAcciones_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
