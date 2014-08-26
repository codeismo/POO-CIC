/*
TAREA 3
meter el if-else en una funcion validar_opcion()
cambiar la condision del if para no usar !=
*/
#include <stdio.h>

int sumar(int x, int y){//X=2, Y=3
    int res;
    res = x + y; //res 2+3=5
    return res; //devuelve 5 
}
int multiplicar(int x, int y){
    return x * y;
}
int restar(int x, int y){
    return x - y ;
}
void imprimir_menu(){
    printf("\nElije una opción:");
    printf("\n1.- Sumar");
    printf("\n2.- Restar");
    printf("\n3.- Multiplicar");
}
void imprime_resultado(int r){// r=5
    printf("\nresultado %d", r);//imprime resultado 5
}

int main(){
    int a=2, b=3, resultado,opcion;//1
    imprimir_menu();//2
    scanf("%d", &opcion);//3
    if(opcion == 1){
        resultado = sumar(a, b);//resultado=5
    }
    if(opcion == 2){
        resultado = restar(a, b);
    }
    if(opcion == 3){
        resultado = multiplicar(a, b);
    }
    //esta equivocado
    if(opcion!=1 && opcion!=2 && opcion!=3){
        printf("\nOpcion invalida!!");
    }else{
        printf("\nopcion valida");
        imprime_resultado( resultado );//envia 5
    }
    
    return 0;
}