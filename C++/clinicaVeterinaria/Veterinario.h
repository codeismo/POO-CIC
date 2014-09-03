#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Fecha.h"

using namespace std;

#ifndef VETERINARIO_H_INCLUDED
#define VETERINARIO_H_INCLUDED

class Veterinario{
private:
    string nombre;
    string cedulaProfesional;
    Fecha fechaContratacion;
public:
    /*************** CONSTRUCTORES ***************/
    Veterinario();
    Veterinario(string n, string cp, Fecha f);
    /************* GETTERS Y SETTERS *************/
    string getNombre();
    string getCedulaProfesional();
    Fecha getFechaContratacion();
    int setNombre( string n );
    int setCedulaProfesional( string n );
    int setFechaContratacion( Fecha f );
    /************ METODOS DE FUNCIONALIDAD ***********/
    /*si es necesario el apuntador para pasar por referencia*/
    void curarAnimal(Animal& a);
};

#endif // VETERINARIO_H_INCLUDED
