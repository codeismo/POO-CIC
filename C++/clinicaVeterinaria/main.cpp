#include <iostream>
#include "Fecha.h"
<<<<<<< HEAD
#include "Perro.h"
=======
>>>>>>> ff34006d7d34fafb7b72dca0c19b9b1b64937e94
#include "Veterinario.h"

using namespace std;

int main()
{
<<<<<<< HEAD
    Fecha contrato, nacimiento;
    contrato.estableceFecha(24, 12, 2014);
    nacimiento.estableceFecha(30, 8, 2010);

    Veterinario vet("Daniela", "VET0892", contrato);
    Perro fido("Doberman", "Fido", nacimiento, 1);

    fido.ladrar();
    vet.curarAnimal(fido);
    //cout<<"sano? "<<fido.getEnfermo()<<endl;
    fido.ladrar();
=======
    /*** Crear un veterinario
    nombre = "Daniela"
    cedulaProfesional = "AUGD789"
    fechaContraction: 15 - 10 -2013
     */
    Fecha contratacion(15, 10, 2013);
    Veterinario vet("Daniela", "AUGD789", contratacion);
    vet.mostrarInformacion();
>>>>>>> ff34006d7d34fafb7b72dca0c19b9b1b64937e94
    return 0;
}
