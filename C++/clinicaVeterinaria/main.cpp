#include <iostream>
#include "Fecha.h"

using namespace std;

int main()
{
    Fecha fecha_1;
    string elMes;
    fecha_1.imprimeFechaNumerica();

    elMes = nombreMes( fecha_1 );

    cout <<elMes;
    return 0;
}
