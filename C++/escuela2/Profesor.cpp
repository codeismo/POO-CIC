#include <iostream>
#include "Profesor.h"
using namespace std;

/*Constructor*/
Profesor::Profesor(){
    nombre = "indefinido";
    materia = "ninguna";
    edad = 20;
    escuela = "CIC-IPN";
}

Profesor::Profesor(string n, int e, string m){
    nombre = n;
    edad = e;
    materia = m;
    escuela = "CIC-IPN";
}

/* El profesor se presenta */
void Profesor::presentarse(){
    cout<<"Mi nombre es "<<nombre<<", mi edad es "<<edad<<" y doy la materia "<<materia<<endl;
}

void Profesor::darClase(){
    cout<<"bla bla bla"<<endl;
}

string Profesor::getNombre(){
    return nombre;
}

int Profesor::setNombre(string n){
    nombre = n;
    return 1;
}

string Profesor::getEscuela(){
    return escuela;
}

int Profesor::setEscuela(string e){
    escuela = e;
    return 1;
}

int Profesor::getEdad(){
    return edad;
}
/*edad evalida de 20 a 70, devuelvo 1 si esta bien
devuelvo 0 si esta mal*/
int Profesor::setEdad(int e){
    if(e >=20 && e<=70){
        edad = e;
        return 1;
    }else{
        return 0;
    }
}

string Profesor::getMateria(){
    return materia;
}

int Profesor::setMateria(string m){
    materia = m;
    return 1;
}
