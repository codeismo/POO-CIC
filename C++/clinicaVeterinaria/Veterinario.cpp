#include <iostream>
#include "Veterinario.h"

using namespace std;
/*************** CONSTRUCTORES ***************/
/*Constructor por default de la clase Veterinario*/
Veterinario::Veterinario(){

}
/*Constructor con argumentos para la clase Veterinario*/
Veterinario::Veterinario(string n, string cp, Fecha f){
    cout<<"Constructor Vet con argumentos"<<endl;
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
<<<<<<< HEAD

void Veterinario::curarAnimal(Animal& a){

    //enfermo es protected, el veterinario solo puede
    //accederlo si es amigo de Animal
    a.enfermo=0;
=======
void Veterinario::mostrarInformacion(){
    cout<<"Nombre veterinario: "<<this->getNombre()<<endl;
    cout<<"Cedula Profesional: "<<this->getCedulaProfesional()<<endl;
    cout<<"Fecha de Contratacion: ";
    this->getFechaContratacion().imprimeFechaNumerica();
>>>>>>> ff34006d7d34fafb7b72dca0c19b9b1b64937e94
}
