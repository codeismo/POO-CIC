#include <stdio.h>

int main(){
    int numero;
    //pedir un numero
    printf("Dame un numero ");
    scanf("%d", &numero);
    //quiero saber si el numero esta entre 50 y 100
    if( numero >= 50 && numero <= 100 ){
        printf("\nTu numero esta entre 50 y 100");
    }
    //puede ser que el numero sea menor que 50
    //o qu el numero sea mayor que 100
    else if( numero < 50){
            //el numero es menor que 50
        printf("El numero es menor que 50");
    }else{
        //el numero es mayor que 100
        printf("El numero es mayor que 100");
    }

    return 0;
}
