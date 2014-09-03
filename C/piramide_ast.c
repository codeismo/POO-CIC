#include <stdio.h>

int main(){
    /** Contadores de los ciclos de cada for **/
    /** limite de cada for **/
    int espacios, asteriscos, renglones;
    int numero_espacios=3, numero_asteriscos=1;

    for(renglones=0; renglones<4; renglones++){
        for(espacios=0; espacios<=numero_espacios ;espacios++){
            printf(" ");
        }
        for(asteriscos=0; asteriscos<numero_asteriscos; asteriscos++){
            printf("*");
        }
        printf("\n");
        numero_espacios--;
        numero_asteriscos+=2;
    }


    return 0;
    }
