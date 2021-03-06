QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
DEFINES += QT_DEPRECATED_WARNINGS

DEFINES += SMTP_BUILD

SOURCES += \
    arbol.cpp \
    archivo.cpp \
    cola.cpp \
    consultamundo.cpp \
    hashmap.cpp \
    eliminarhumanos.cpp \
    heap.cpp \
    listaarbol.cpp \
    listablackdwarf.cpp \
    listadeportes.cpp \
    listadoble.cpp \
    listaelimsalv.cpp \
    listahashmap.cpp \
    listapecvir.cpp \
    listasalvahumanos.cpp \
    listasimple.cpp \
    main.cpp \
    mainwindow.cpp \
    persona.cpp \
    personatest.cpp \
    randomize.cpp \
    salvahumanos.cpp

HEADERS += \
    arbol.h \
    archivo.h \
    cola.h \
    consultamundo.h \
    hashmap.h \
    eliminarhumanos.h \
    heap.h \
    listaarbol.h \
    listablackdwarf.h \
    listadeportes.h \
    listadoble.h \
    listaelimsalv.h \
    listahashmap.h \
    listapecvir.h \
    listasalvahumanos.h \
    listasimple.h \
    mainwindow.h \
    persona.h \
    personatest.h \
    randomize.h \
    salvahumanos.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
