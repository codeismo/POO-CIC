#include <stdio.h>

int main(){
    int ciclo=1, x;

    while( ciclo<10 ){
        printf("\nCiclo %d: ", ciclo);
        x=1;
        //el siguiente printf  segun el ciclo
        while( x<=ciclo ){
          printf("*");
          x++;
        }

        ciclo++; //ciclo = ciclo +1
    }

    return 0;
}