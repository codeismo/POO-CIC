#include <stdio.h>

struct Nodo{
    int valor;
    struct EstructuraNodo *ptrSiguiente;
};

typedef struct Nodo nodo;
typedef nodo *ptrNodo;

void tamVariables(){
    int tamInt = sizeof(int);
    int tamChar = sizeof(char);
    int tamArrInt = sizeof(int[4]);
    int tamNodo = sizeof(nodo);
    printf("TAMANIOS DE ALGUNAS VARIABLES\n");
    printf("Entero: %d bytes\n", tamInt);
    printf("Char: %d bytes\n", tamChar);
    printf("Arreglo de enteros: %d bytes\n", tamArrInt);
    printf("Nodo: %d bytes\n", tamNodo);
}

void insertaNodo(int valor, ptrNodo *ptrRaiz){
    /*** ptrRaiz = direccion de la raiz ***/
    printf("ptrRaiz %p\n", ptrRaiz);
    /*** *ptrRaiz = raiz (estructura) ***/
    printf("*ptrRaiz %p\n", *ptrRaiz);
    /*** ptrRaiz-> miembro int de la estructura raiz ***/
    /*** ptrRaiz->ptrSiguiente miembto apuntador de la estructura raiz ***/
    /*** Obtenemos memoria y apuntador hacia dicha memoria ***/
    nodo *ptrNuevo = malloc(sizeof(nodo));
    /*** Asignamos el valor nuevo ***/
    ptrNuevo->valor = valor;
    /*** El puntero del nuevo nodo tiene la direccion de la raiz***/
    ptrNuevo->ptrSiguiente = *ptrRaiz;
    /*** El apuntador a la raiz tiene el apuntador al nuevo nodo ***/
    *ptrRaiz = ptrNuevo;
    printf("El apuntador A LA raiz tiene (direccion raiz) %p\n", ptrRaiz);
    printf("El apuntador DE LA raiz tiene (direccion del siguiente) %p\n", (*ptrRaiz)->ptrSiguiente);
}

void imprimeLista(ptrNodo ptrActual){
    while(ptrActual != NULL){
        printf("Lista %d\n", ptrActual->valor);
        ptrActual = ptrActual->ptrSiguiente;
    }
}

int main(){
    //tamVariables();
    ptrNodo ptrRaiz = NULL; //apuntador a la raiz

    imprimeLista(ptrRaiz);
    insertaNodo(5, &ptrRaiz);
    imprimeLista(ptrRaiz);
    insertaNodo(8, &ptrRaiz);
    imprimeLista(ptrRaiz);


    return 0;
}
