#include <stdio.h>

/** funcion con parametros por referencia **/
void cambiaValorPorReferencia(int *ptrNum){
    /** colocar un 100 en la direccion de
    memoria **/
    *ptrNum = 100;
}

/** Funcion con parametros por valor **/
void cambiaValor(int numero){
    numero = 100;
    printf("En la funcion numero vale %d\n",numero);
}

int main(){
    /*** Hace referencia al VALOR 7 en general
    hace referencia a un valor entero ***/
    int numero = 7;
    printf("Valor almacenado en al variable numero %d\n", numero);
    /** Apuntador a la direccion de memoria
    en donde esta almacenada la variable numero
    **/
    int *ptrNumero = &numero;
    printf("La direccion de memoria de la variable numero es %p\n", ptrNumero);

    /*** Cambio el valor de la varible ***/
    numero = 10;
    printf("Nuevo valor cambiado con la variable %d\n", numero);
    /*** Obtener el valor de la variabel mediante el apuntador ***/
    printf("Obteniendo el valor con el apuntador %d\n", *ptrNumero);

    cambiaValor(numero);
    printf("Despues de cambiaNumero el numero es %d\n", numero);
    /** Le envio la direccion de memoria de
    la variable numero **/
    cambiaValorPorReferencia(&numero);
    printf("Cambie el numero por referencia %d\n", numero);
    return 0;
}