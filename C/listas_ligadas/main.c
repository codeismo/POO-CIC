#include <stdio.h>

struct unNodo{
    int valor;
    struct unNodo *ptrSiguiente;
};

/**En lugar de usar "struct unNodo" usaremos "nodo" ALIAS**/
typedef struct unNodo nodo; /** Nodo **/
typedef nodo *ptrNodo;      /** Apuntador a un Nodo **/

void ejercicio(){
    /** MALLOC Recibe cantidad de memoria que se solicita
    Devuelve: Devuelve la nueva direccion de memoria**/
    char *ptrChar = malloc( sizeof(char) );
    printf("La nueva direccion es %p\n", ptrChar);
    printf("En esa direccion hay %c\n", *ptrChar);
    *ptrChar = 'f';/**sobre escibe lo que hay en la memoria**/
    printf("EL CONTENIDO CAMBIA, LA DIRECCION ES LA MISMA\n");
    printf("La nueva direccion es %p\n", ptrChar);
    printf("En esa direccion hay %c\n", *ptrChar);
    char letra = 'p';
    ptrChar = &letra;/**sobrescribo la direccion**/
    printf("EL CONTENIDO CAMBIA Y LA DIRECCION TAMBIEN\n");
    printf("La nueva direccion es %p\n", ptrChar);
    printf("En esa direccion hay %c\n", *ptrChar);
}

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

/** Recibe el valor a insertar y
un apuntador al ultimo nodo **/
void insertarNodo(int valor, ptrNodo *ptrUltimo ){
    int tamNodo = sizeof( nodo );
    /** Solcito memoria**/
    nodo *ptrNuevoNodo = malloc( tamNodo );
    /** Asiganamos los valores del nodo**/
    (*ptrNuevoNodo).valor = valor;
    (*ptrNuevoNodo).ptrSiguiente = ptrUltimo;
    /** El nuevo nodo sera el ultimo**/
    ptrUltimo = ptrNuevoNodo;
}

void imprimeLista( ptrNodo *ptrUltimo ){

}

int main()
{
    /** Inicilamente el nodo ultimo es NULL **/
    ptrNodo ultimo = NULL;
    insertarNodo( 8, &ultimo );
    imprimir( &ultimo );
    return 0;
}
