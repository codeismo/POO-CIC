#include <stdio.h>

int main(){
    int a=10, b=5, resultado;
/*
    int a;
    int b;
    int resultado;
*/
    //pedir a el usuario el valor de a
    printf("\nDame el valor de a ");
    scanf("%d", &a);
    printf("\nDame el valor de b ");
    scanf("%d", &b);
    //Quiero saber cual es mayor
    //==, <=, >, <, !=
    if( b >= a ){
        printf("\nb es mayor o igual que a");
    }else{
        printf("\nb es menor a");
    }

    return 0;
}