#include <stdio.h>
int main (){
    int a=10, b=20;

    if( a==0 || b==0 ){
        //bloque1
        printf("\nAlguno es igual cero");
    }else{
        //bloque 2
        printf("\nLos dos son diferentes de cero");
    }

    if( a!=0 && b!=0 ){
        //bloque 2
        printf("\nLos dos son diferentes de cero");
    }else{
        //bloque1
        printf("\nAlguno es igual cero");
    }

    return 0;
}