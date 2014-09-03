#include <iostream>
#include "Perro.h"

using namespace std;
/*************** CONSTRUCTORES ***************/
/*Constructor por default de la clase Perro*/
Perro::Perro(){

}
/*Constructor con argumentos de la clase Perro*/
Perro::Perro(string r, string n, Fecha fn, int e):
    Animal(n, fn, e){
    raza = r;
}
/************* GETTERS Y SETTERS *************/

string Perro::getRaza(){
    return raza;
}

int Perro::setRaza( string r ){
    raza = r;
    return 1;
}

/************ METODOS DE FUNCIONALIDAD ***********/
/*Cuando el perro esta enfermo aulla
Cuando el perro esta sano ladra*/
void Perro::ladrar(){

    cout<<"perro va a ladrar:"<<enfermo;
    cout<<"perro va a ladrar(this):"<<this->enfermo;

    if(enfermo == 1){
        cout<<"auuuuuuuuu"<<endl;
    }else{
        cout<<"guaf guaf"<<endl;
    }
}
