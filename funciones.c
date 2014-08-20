#include <stdio.h>

//funcion que suma
int sumar(int x, int y){
    int res;
    res = x + y;
    return res;
}

int main(){
    int a=2, b=3, resultado;
    //sumo y muestro resultado
    resultado = sumar(a, b);
    printf("\n%d + %d = %d", a, b, resultado);
    //hago la suma con numeros del usuario
    printf("\nDame a: ");
    scanf("%d", &a);
    printf("\nDame b: ");
    scanf("%d", &b);

    resultado = suma(a, b);
    printf("\n%d + %d = %d", a, b, resultado);

    return 0;
}
