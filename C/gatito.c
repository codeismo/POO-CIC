#include <stdio.h>
/*El tablero es una variable global*/
char tablero[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};

/***Imprime el tablero as�
- - -
- - -
- - -

***/
void imprimir_tablero(){
    int posicion;
    for(posicion=0; posicion<9; posicion++){
        printf("%c", tablero[posicion]);
        if(posicion==2 || posicion==5 || posicion==8){
            printf("\n");
        }
    }
}

/*Pide al usuario la posicion y el simbolo para tirar
modifica el tablero con el tiro del jugador*/
void tirar(){
    int posicion;
    char simbolo;
    /***pedir al usuario simbolo tirar ***/
    printf("\nS�mbolo de tiro ( x , o): ");
    scanf("%c", &simbolo);
    /***pedir al usuario posicion para tirar ***/
    printf("\nPosicion de tiro (0-8): ");
    scanf("%d", &posicion);
    //modificar el tablero
   tablero[posicion] = simbolo;
}

/*Revisa en el tablero y si alguien gana devuelve 1
Si el tablero esta lleno devuelve 0 y si el juego
continua devuelve 2*/
int ganar(){

}


int main(){
    imprimir_tablero();
    tirar();
    return 0;
}
