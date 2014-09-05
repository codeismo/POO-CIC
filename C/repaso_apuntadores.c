#include <stdio.h>
/** Variables globales
son visibles para todas las funciones **/
int x=0, y=0;

void cambiaValorX(){
    x = 10;
    printf("Funcion: nuevo valor de x es %d\n", x);
}

int main(){
    /** **/
    printf("Main: Valor inicial de x es %d\n", x);
    cambiaValorX();
    return 0;
}