#include <iostream>
#include "Animal.h"

using namespace std;
/*************** CONSTRUCTORES ***************/
/*Constructor por default de la clase Animal*/
Animal::Animal(){
    nombre = "undefined";
    enfermo = 0;
}
/*Constructor con argumentos para la clase Animal*/
Animal::Animal(string n, Fecha f ,int e){
    nombre = n;
    fechaNacimiento = f;
    enfermo = e;
}

/************* GETTERS Y SETTERS *************/

string Animal::getNombre(){
    return nombre;
}

Fecha Animal::getFechaNacimiento(){
    return fechaNacimiento;
}

int Animal::getEnfermo(){
    return enfermo;
}

int Animal::setNombre( string n ){
    nombre = n;
    return 1;
}

int Animal::setFechaNacimiento( Fecha f ){
    fechaNacimiento = f;
    return 1;
}

/*1-enfermo y 0-sano*/
int Animal::setEnfermo(int e){
    enfermo = e;
    return 1;
}

/************ METODOS DE FUNCIONALIDAD ***********/

void Animal::sanar(){
    //con el keyword this llamar al metodo setEnfermo(0)
}
