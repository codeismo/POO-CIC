#include <stdio.h>

int main(){
    int primos[4] = {1, 2, 3, 5};
    int posicion=0;

    printf("\nArreglo desde la posicion 0 hasta la 3");
    while( posicion<4 ){
         printf("\nLa posicion %d es %d", posicion ,primos[posicion]);
         posicion++;
    }
    printf("\nArreglo desde la posicion 3 hasta la 0");
    posicion=3;
    while( posicion>=0 ){
            printf("\nLa posicion %d es %d", posicion ,primos[posicion]);
        posicion--;
    }
    //imprimir todas las posiciones
  /*  printf("\nLa posicion 0 es %d", primos[0]);
    printf("\nLa posicion 1 es %d", primos[1]);
    printf("\nLa posicion 2 es %d", primos[2]);
    printf("\nLa posicion 3 es %d", primos[3]);
*/
    //imprimir las posisciones usando while


    return 0;
}
