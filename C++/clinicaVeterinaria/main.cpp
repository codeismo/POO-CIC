#include <iostream>
#include "Fecha.h"
#include "Veterinario.h"

using namespace std;

int main()
{
    /*** Crear un veterinario
    nombre = "Daniela"
    cedulaProfesional = "AUGD789"
    fechaContraction: 15 - 10 -2013
     */
    Fecha contratacion(15, 10, 2013);
    Veterinario vet("Daniela", "AUGD789", contratacion);
    vet.mostrarInformacion();
    return 0;
}
