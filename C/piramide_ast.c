#include <stdio.h>

int main(){
    int espacios, asteriscos, renglones;
    int numero_espacios=3;

    for(renglones=0; renglones<4; renglones++){
        for(espacios=0; espacios<=numero_espacios ;espacios++){
            printf(" ");
        }
        for(asteriscos=0; asteriscos<1; asteriscos++){
            printf("*");
        }
        printf("\n");
        numero_espacios--;
    }


    return 0;
}
