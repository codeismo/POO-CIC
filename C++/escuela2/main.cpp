#include <iostream>
#include "Profesor.h"

using namespace std;

int main()
{
    //crear un objeto
    Profesor profe, otroProfe;
    string nom = "Juan";
    profe.setNombre("Daniela");
    otroProfe.setNombre(nom);
    profe.setMateria("Programacion");
    profe.setEdad(30);
    profe.presentarse();
    profe.darClase();

    //probar setEdad
    int valido;
    valido = otroProfe.setEdad(50);
    if(valido==0){
        cout<<"Edad incorrecta";
    }else{
        cout<<"Edad correcta";
    }
}
