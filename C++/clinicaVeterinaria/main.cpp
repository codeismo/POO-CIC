#include <iostream>
#include "Fecha.h"
#include "Perro.h"
#include "Veterinario.h"

using namespace std;

int main()
{
    Fecha contrato, nacimiento;
    contrato.estableceFecha(24, 12, 2014);
    nacimiento.estableceFecha(30, 8, 2010);

    Veterinario vet("Daniela", "VET0892", contrato);
    Perro fido("Doberman", "Fido", nacimiento, 1);

    fido.ladrar();
    vet.curarAnimal(fido);
    //cout<<"sano? "<<fido.getEnfermo()<<endl;
    fido.ladrar();
    return 0;
}
