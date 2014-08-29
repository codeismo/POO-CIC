#include <iostream>
#include "Animal.h"

using namespace std;

#ifndef PERRO_H_INCLUDED
#define PERRO_H_INCLUDED

class Perro : public Animal{
private:
    string raza;
public:
    /*************** CONSTRUCTORES ***************/
    Perro();
    /************* GETTERS Y SETTERS *************/
    string getRaza();
    int setRaza( string r );
    /************ METODOS DE FUNCIONALIDAD ***********/
    void ladrar();
};

#endif // PERRO_H_INCLUDED
