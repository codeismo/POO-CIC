#include <stdio.h>

void imprimir_arreglo( int numeros[6] ){
    int posicion;
    for(posicion=0; posicion<=5; posicion++){
        printf("%d", numeros[posicion]);
    }
    printf("\n");
}
/** original {5,6,0,4,3,1} **/
void intercambiar_posiciones(int pos1, int pos2, int numeros[6]){
    pos1=1;
    pos2=2;
    int aux = numeros[pos1];
    /** aux=6 **/
    numeros[pos1]=numeros[pos2];
    /** original {5,0,0,4,3,1} **/
    numeros[pos2]=aux;
}

int main(){
    int numeros[6]={5,6,0,4,3,1};
    imprimir_arreglo( numeros );
    intercambiar_posiciones(1,2, numeros);
    imprimir_arreglo( numeros );
    return 0;
}
