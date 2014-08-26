#include <stdio.h>

int main(){
    int numero, mod2, mod3, mod5,mod7;

    printf("dame un numero");
    scanf("%d", &numero);

    //calcular los modulos
    mod2 = numero % 2;
    mod3 = numero % 3;
    mod5 = numero % 5;
    mod7 = numero % 7;

    //Si todos distintos de cero
    if( mod2!=0 && mod3!=0 && mod5!=0 && mod7!=0 ){
        printf("\nes primo");
    }else{
        printf("\nno es primo");
    }

    if( mod2==0 || mod3==0 || mod5==0 || mod7==0 ){
        printf("\nno es primo");
    }else{
        printf("\nes primo");
    }

    return 0;
}
