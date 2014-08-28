#include <iostream>

using namespace std;

#ifndef PROFESOR_H_INCLUDED
#define PROFESOR_H_INCLUDED

class Profesor{
public:
    /*Declare mi constructor*/
    Profesor();
    Profesor(string n, int e, string m);
    void presentarse();
    void darClase();
    string getNombre();
    int setNombre( string n );
    string getEscuela();
    int setEscuela( string e );
    int getEdad();
    int setEdad( int e );
    string getMateria();
    int setMateria( string m );
private:
    string nombre;
    string escuela;
    int edad;
    string materia;
};

#endif // PROFESOR_H_INCLUDED
