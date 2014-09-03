#include <iostream>
#include "Fecha.h"

#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

class Animal{
    friend class Veterinario;
private:
    string nombre;
    Fecha fechaNacimiento;
protected:
    int enfermo; /*1-enfermo y 0-sano*/
    void sanar();
public:
    /*************** CONSTRUCTORES ***************/
    Animal();
    Animal(string n, Fecha f, int e);
    /************* GETTERS Y SETTERS *************/
    string getNombre();
    Fecha getFechaNacimiento();
    int getEnfermo();
    int setNombre( string n );
    int setFechaNacimiento( Fecha f );
    /************ METODOS DE FUNCIONALIDAD ***********/
    int setEnfermo(int e);
    void enfermar();
    void imprimirDatos();
};

#endif // ANIMAL_H_INCLUDED
