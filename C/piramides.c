#include <stdio.h>

int main(){
    int ciclo, c_interno;

    for(ciclo=0; ciclo<=5; ciclo++){
       printf("\nCiclo %d ", ciclo);

      for(c_interno=0; c_interno<=ciclo; c_interno++){
            printf("*");
        }
    }
    printf("\nPIRAMIDE INVERSA");
    //piramide inversa
    for(ciclo=0; ciclo<=5; ciclo++){
       printf("\nCiclo %d ", ciclo);

      for(c_interno=5; c_interno>=ciclo; c_interno--){
            printf("*");
        }
    }

    return 0;
}

  *****
*******
