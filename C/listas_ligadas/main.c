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
}

int main()
{
    tamVariables();
    return 0;
}
