#include <stdio.h>
#define PI 3.1416

float area_circulo(int r){
    return PI * r * r;
}

int area_cuadrado(int l){
    return l * l;
}

void imprimir_menu(){
    printf("\n3.-Area Cuadrado");
    printf("\n6.- Area Circulo");
}


int main(){
    int opcion, numero;
    float resultado;
    imprimir_menu();
    printf("\nElije una opcion: ");
    scanf("%d", &opcion);
    printf("\nDame el radio o el lado: ");
    scanf("%d", &numero);

    switch(opcion){
    case 3:
        resultado=area_cuadrado(numero);
        break;
    case 6:
        resultado=area_circulo(numero);
        break;
    default:
        printf("\nOpcion Invalida!!");
    }

    printf("\nel resultado %f", resultado);
    return 0;
}

