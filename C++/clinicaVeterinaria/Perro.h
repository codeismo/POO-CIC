#include <iostream>
#include "Animal.h"

using namespace std;

#ifndef PERRO_H_INCLUDED
#define PERRO_H_INCLUDED

class Perro : public Animal{
    //solo si veterinario necesita acceder a raza hacemos
    //que veterinario sea amigo
   // friend class Veterinario;
private:
    string raza;
public:
    /*************** CONSTRUCTORES ***************/
    Perro();
    Perro(string r, string n, Fecha fn, int e);
    /************* GETTERS Y SETTERS *************/
    string getRaza();
    int setRaza( string r );
    /************ METODOS DE FUNCIONALIDAD ***********/
    void ladrar();
};

#endif // PERRO_H_INCLUDED
