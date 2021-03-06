#include "persona.h"

Persona::Persona(){
    pecados=new ListaPecVir;
    virtudes=new ListaPecVir;
    hijos=new ListaDoble;
    amigos=new ListaDoble;
    deportes=new ListaDeportes;
    paises=new ListaSimple();
    eliminado = new ListaElimSalv();
    revivido = new ListaElimSalv();
}

string Persona::obtenerGenero(){
    if(this->genero)
        return "Femenino";
    return "Masculino";
}

string Persona::obtenerVivo(){
    if(this->vivo)
        return "Vivo";
    return "Muerto";
}

string Persona::imprimirAmigos(){
    string texto = "";
    texto +="Nombre: "+this->nombre+"\tApellido: "+this->apellido+"\tID: "+to_string(this->ID)+"\tEstado: "+
            this->obtenerVivo();
    return texto;
}

string Persona::verificarAmigos(){
    if( !this->amigos->isEmpty())
        return this->amigos->imprimirAmigos();
    return "No tiene amigos";
}

string Persona::verificarHijos(){
    if( !this->hijos->isEmpty())
        return this->hijos->imprimirAmigos();
    return "";
}

string Persona::verificarEsposa(){
    if(this->esposa != NULL)
        return this->esposa->imprimirAmigos();
    return "";
}

string Persona::verificarPadre(){
    if(this->padre != NULL)
        return this->padre->imprimirAmigos();
    return "";
}
string Persona::verificarMadre(){
    if(this->madre != NULL)
        return this->madre->imprimirAmigos();
    return "";
}

string Persona::imprimir(){
    stringstream buff;
    buff << this->ID;
    string id = buff.str();
    //Faltan los datos que son int
    // Ocupo pasarlos a ints y no se
    string texto = "";
    texto +="Nombre: "+this->nombre+"\tApellido: "+this->apellido+"\tID: "+id+"\t"+
            "\tEstado: "+this->obtenerVivo()+"\tFecha de nacimiento: "+this->nacDia+"-"+this->nacMes+
            "-"+this->nacAno+"\t"+this->rangoEtario+"\tGenero: "+this->obtenerGenero()+
            "\tContinente donde vive: "+this->continenteVive+"\tPais donde vive: "+this->paisVive+
            "\tMadre: "+this->verificarMadre()+"\tPadre: "+this->verificarPadre()+
            "\tEstado marital: "+this->estadoMarital+"\tEsposa: "+this->verificarEsposa()+
            "\tHijos: "+this->verificarHijos()+"\tCreencia: "+this->creencia+"\tProfesion: "+
            this->profesion+"\tPecados: "+this->pecados->imprimir()+"\tVirtudes: "+
            this->virtudes->imprimir()+"\tPaises visitados: "+this->paises->imprimir()+
            "\tAmigos: "+this->verificarAmigos()+"\tEjercicio: "+this->deportes->imprimir()+"\n";

    return texto;
}
