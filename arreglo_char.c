#include <stdio.h>

int main(){
    //declaro e inicializo el arreglo
    char palabra[10]={'d','a','n','i','e','l','a'};

    printf("\nEmpieza con %c", palabra[0]);
    printf("\nNombre %s", palabra);

    palabra[0] = 'l';
    palabra[1] = 'u';
    palabra[2] = 'i';
    palabra[3] = 's';

    printf("\nNombre %s", palabra);

    palabra[0] = 'x';
    palabra[1] = 'o';
    palabra[2] = 'c';
    palabra[3] = 'h';
    palabra[4] = 'i';
    palabra[5] = 't';
    palabra[6] = 'l';
    palabra[7] = 'E';
    palabra[8] = 's';
    palabra[9] = 'F';
    palabra[10] = 'L';
    palabra[11] = 'O';
    palabra[12] = 'R';

    printf("\nNombre %s", palabra);

    return 0;
}
