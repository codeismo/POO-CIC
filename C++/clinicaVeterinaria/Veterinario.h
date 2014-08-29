#include <iostream>
#include "Perro.h"

using namespace std;

#ifndef VETERINARIO_H_INCLUDED
#define VETERINARIO_H_INCLUDED

class Veterinario{
private:
    string nombre;
public:
    Veterinario();
    void curarPerro(Perro p);
};




#endif // VETERINARIO_H_INCLUDED
