#include <stdio.h>

int numeros[6]={5,6,0,4,3,1};

void imprimir_arreglo(){
    int posicion;
    for(posicion=0; posicion<=5; posicion++){
        printf("%d", numeros[posicion]);
    }
    printf("\n");
}
/** original {5,6,0,4,3,1} **/
void intercambiar_posiciones(int pos1, int pos2){
    pos1=1;
    pos2=2;
    int aux = numeros[pos1];
    /** aux=6 **/
    numeros[pos1]=numeros[pos2];
    /** original {5,0,0,4,3,1} **/
    numeros[pos2]=aux;
}

int main(){
    imprimir_arreglo();
    intercambiar_posiciones(1,2);
    imprimir_arreglo();
    return 0;
}
