#include <stdio.h>

int main(){
    /*** contadores de los ciclos for ***/
    int espacios, asteriscos, lineas;
    /*** limites de ciclos for ***/
    int total_espacios = 3;

    for(lineas=0; lineas<4; lineas++){
        /** imprime espacios **/
        for(espacios=0; espacios<total_espacios; espacios++){
            printf(" ");
        }
        /** imprime 5 asteriscos **/
        for(asteriscos=0; asteriscos<=4; asteriscos++){
            printf("*");
        }
        printf("\n");
        total_espacios--;
    }
    return 0;
}