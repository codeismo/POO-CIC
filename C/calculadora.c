#include <stdio.h>

//funcion que suma
int sumar(int x, int y){
    return x+y;}

int restar(int x, int y){
    return x - y;}

int multiplicar(int x, int y){
    return x * y;}

void imprimir_menu(){
    printf("\n1.-Sumar");
    printf("\n2.-Restar");
    printf("\n3.-Multiplicar");
}

//ejecuta operacion
//pide valores y jecuta la operacion
//imprimeresultado
void ejecuta_operacion(int op){
    int a=2, b=3, resultado;
    //pedir que nos de los numeros a y b
    printf("\nValor de a: ");
    scanf("%d", &a);
    printf("\nValor de b: ");
    scanf("%d", &b);
    switch(op){
        case 1:
            resultado = sumar(a,b);
            printf("\nsumar");
            break;
        case 2:
            resultado = restar(a,b);
            printf("\nrestar");
            break;
        case 3:
            resultado = multiplicar(a,b);
            printf("\nmultiplicar");
            break;
        default:
             printf("\nOpcion invalida!!");
    }

    printf("\nresultado %d", resultado);
}

int main(){
    int opcion;
    imprimir_menu();
    //pedir una opcion
    do{
        printf("\nElije una opcion: ");
        scanf("%d", &opcion);
    } while(opcion < 1 || opcion >3);
    
    //validar si la opcion es correcta
    if(opcion == 1 || opcion == 2 || opcion ==3){
        //opcion correcta
        ejecuta_operacion( opcion );
    }else{
        printf("\nOpcion incorrecta");
    }

    return 0;
}