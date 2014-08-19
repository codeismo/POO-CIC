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
    //hacemos la suma
    resultado = a + b;
    //Imprimimos la operacion y el resultado
    printf("%d + %d = %d", a, b, resultado);
    return 0;
}