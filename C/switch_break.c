	




#include <stdio.h>

int main(){
    char letra;
    scanf("%c", &letra);
    switch(letra){
    case 'a':
        printf("Es una A\n");
        break;
    case 'e':
        printf("Es una E\n");
        break;
    default:
        printf("No es A ni E\n");
        break;
    }
    printf("Despues del switch\n");
    return 0;
}