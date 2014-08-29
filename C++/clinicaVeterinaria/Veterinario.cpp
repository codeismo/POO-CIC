#include <iostream>
#include "Veterinario.h"

using namespace std;
/*************** CONSTRUCTORES ***************/
/*Constructor por default de la clase Veterinario*/
Veterinario::Veterinario(){

}
/*Constructor con argumentos para la clase Veterinario*/
Veterinario::Veterinario(string n, string cp, Fecha f){
    nombre = n;
    cedulaProfesional = cp;
    fechaContratacion = f;
}

/************* GETTERS Y SETTERS *************/
string Veterinario::getNombre(){
    return nombre;
}

string Veterinario::getCedulaProfesional(){
    return cedulaProfesional;
}

Fecha Veterinario::getFechaContratacion(){
    return fechaContratacion;
}

int Veterinario::setNombre( string n ){
    nombre = n;
    return 1;
}

int Veterinario::setCedulaProfesional( string n ){
    cedulaProfesional = n;
    return 1;
}

int Veterinario::setFechaContratacion( Fecha f ){
    fechaContratacion = f;
    return 1;
}

/************ METODOS DE FUNCIONALIDAD ***********/

void Veterinario::curarAnimal(Animal a){

}
