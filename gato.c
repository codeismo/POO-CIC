#include <stdio.h>
//variable global
char tablero[9] = {'-','-','-','-','-','-','-','-','-',};

void imprimir_tablero(){
   int posicion;
   for(posicion=0; posicion<=8; posicion++){
        printf("%c", tablero[posicion]);
        if(posicion == 2 || posicion==5 || posicion==8){
            printf("\n");
        }
   }
   printf("\n\n");
}
 /*Devuelve 0 si esta mal
 y 1 si esta bien*/
int validar_tiro(int posicion){
    if(posicion >=0 && posicion<=8 && tablero[posicion]=='-'){
        return 1;
    }else{
        return 0;
    }
}
/*simbolo puede ser 'x' 'o'*/
void tirar(char simbolo, int posicion){
    tablero[posicion] = simbolo;
}
/*devuelve
2 si nadie gana y el tablero lleno,
1 si alguiengana y
0 en otro caso*/
int alguien_gano(){
    if(tablero[0]!='-' && tablero[0]==tablero[1] && tablero[0]==tablero[2]){
        printf("\nGanaste");
        return 1;
    }else if(tablero[3]!='-' && tablero[3]==tablero[4] && tablero[3]==tablero[5]){
        printf("\nGanaste");
        return 1;
    }else if(tablero[6]!='-' && tablero[6]==tablero[7] && tablero[6]==tablero[8]){
        printf("\nGanaste");
        return 1;
    }else if(tablero[0]!='-' && tablero[0]==tablero[3] && tablero[0]==tablero[6]){
        printf("\nGanaste");
        return 1;
    }else if(tablero[1]!='-' && tablero[1]==tablero[4] && tablero[1]==tablero[7]){
        printf("\nGanaste");
        return 1;
    }else if(tablero[2]!='-' && tablero[2]==tablero[5] && tablero[2]==tablero[8]){
        printf("\nGanaste");
        return 1;
    }else if(tablero[0]!='-' && tablero[0]==tablero[4] && tablero[0]==tablero[8]){
        printf("\nGanaste");
        return 1;
    }else if(tablero[2]!='-' && tablero[2]==tablero[4] && tablero[2]==tablero[6]){
        printf("\nGanaste");
        return 1;
    }//Revisa si esta lleno
    else if(tablero[0]!='-' && tablero[1]!='-' && tablero[2]!='-' && tablero[3]!='-' && tablero[4]!='-' && tablero[5]!='-' && tablero[6]!='-' && tablero[7]!='-' && tablero[8]!='-'){
        printf("\nTablero Lleno");
        return 2;
    }else{
        printf("\nContinua el Juego");
        return 0;
    }
}

int main(){
    imprimir_tablero();
    tirar('x', 4);
    imprimir_tablero();
    return 0;
}