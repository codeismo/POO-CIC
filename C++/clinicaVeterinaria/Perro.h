#include <iostream>

using namespace std;

#ifndef PERRO_H_INCLUDED
#define PERRO_H_INCLUDED

class Perro{
private:
    string nombre;
    Fecha fechaNacimiento;
    int enfermo; /*1-enfermo y 0-sano*/
public:
    Perro();
    void enfermar();
    void sanar();
    string getNombre();
    Fecha getFechaNacimiento();
    int getEnfermo();
    int setNombre( string n );
    int setFechaNacimiento( Fecha f );
    int setEnfermo(int e);
};

#endif // PERRO_H_INCLUDED
