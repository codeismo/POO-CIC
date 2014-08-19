#include <stdio.h>

int main(){
    //las variables se declaran al incio
    int numero_1=100, numero_2;
    char vocal = 'a', consonante = 'p';

    printf("num1 es %d vocal es %c", numero_1, vocal);

    printf("\nDame una consonante ");
    scanf("%c", &consonante);

    printf("\nDame el numero 2 ");
    scanf("%d", &numero_2);

    printf("\nnum2 es %d y consonante es %c", numero_2, consonante);
    return 0;
}
