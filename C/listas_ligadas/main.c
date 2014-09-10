#include <stdio.h>

struct unNodo{
    int valor;
    struct unNodo *ptrNodo;
};

/**En lugar de usar "struct unNodo" usaremos "nodo" ALIAS**/
typedef struct unNodo nodo;

void tamVariables(){
    /*** Cantidad de memoria de un tipo de dato ***/
    int tamEnteros = sizeof(int);
    int numeros[3];
    printf("Un entero ocupa %d bytes\n", tamEnteros);
    printf("La cantidad de memoria asignada a numeros es de %d bytes\n", sizeof(numeros) );
    printf("memoria para un nodo %d \n", sizeof( nodo ));
    /** Me duevuleve una direccion de memoria
    con 8 bytes disponibles**/
    int *ptrMemoriaAsiganada= malloc(8);
    printf("La nueva direccion de memoria %p\n",ptrMemoriaAsiganada);
    printf("La nueva direccion tiene basura %d\n", *ptrMemoriaAsiganada);
    *ptrMemoriaAsiganada = 8;
    printf("La nueva direccion ahora tiene %d\n", *ptrMemoriaAsiganada);
}

int main()
{
    tamVariables();
    return 0;
}
