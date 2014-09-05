#include <stdio.h>
/** Variables globales
son visibles para todas las funciones **/
int y=0;

/** El parametro x es una variable local
SOLO ES VISIBLE PARA cambiaX**/
/** Recibe parametros por valor
(le estoy enviando el valor de x) **/
void cambiaX(int x){
    x = 10;
    printf("Funcion: x vive en %p\n", &x);
    printf("Funcion: nuevo valor de x es %d\n", x);
}

/** Recibe la direccion de memoria de x
(funcion que recibe parametros por referencia) **/
void cambiaXPorReferencia( int *ptrX ){
    /** Los apuntadores guardan direcciones de memoria **/
    printf("Funcion por Referencia: La direccion de x %p\n", ptrX);
    *ptrX = 10;
    printf("Funcion por Referencia: El nuevo valor almacenado en x es %d\n", *ptrX);
}

int main(){
    /**Variable local es visible solo para el main**/
    int x=0;
    printf("Main: x vive en %p\n", &x);
    printf("Main: Valor inicial de x es %d\n", x);
    cambiaX( x );
    printf("Main: Despues de cambiaX() x es %d\n", x);
    cambiaXPorReferencia( &x );
    printf("Main: Despues de cambiaXPorReferencia() x es %d\n", x);
    return 0;
}