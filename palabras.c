#include <stdio.h>

int main(){
    char nombre[7] = {'D', 'a', 'n', 'i', 'e', 'l', 'a'};
    int posicion = 0;

    while(posicion <= 6){
        printf("\nletra %d es %c", posicion, nombre[posicion] );
        posicion++;
    }

    printf("\nEl arreglo nombre es %s", nombre);
    printf("\nOtro nombre: ");
    scanf("%s", &nombre);
    printf("\nEl arreglo nombre es %s", nombre);

    posicion = 0;
    while( nombre[posicion]!= 0 ){
        printf("\nletra %d es %c", posicion, nombre[posicion] );
        posicion++;
    }
    return 0;