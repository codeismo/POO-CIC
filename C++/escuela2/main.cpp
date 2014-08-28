#include <iostream>
#include "Profesor.h"

using namespace std;

int main()
{
    //crear un objeto
    Profesor profe;
    Profesor otroProfe("Juanito", 35, "Matematicas");

    profe.presentarse();
    otroProfe.presentarse();
}
