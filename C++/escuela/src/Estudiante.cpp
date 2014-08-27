#include <iostream>
#include "Estudiante.h"

using namespace std;

void Estudiante::presentarse(){
    cout<<"Hola mi nombre es "<<nombre<<" y mi edad es "<<edad;
}
/*Cambia el valor del atributo nombre*/
int Estudiante::setNombre(string n){
    nombre = n;
    return 0;
}
/*Devuelve el valor del atributo nombre*/
string Estudiante::getNombre(){
    return nombre;
}
/*Cambia el valor del atributo edad*/
int Estudiante::setEdad(int e){
    if(e>=10 && e<=90){
        //edad valida
        edad=e;
        return 1;
    }else{
        //edad es invalida
        return 0;
    }
}
