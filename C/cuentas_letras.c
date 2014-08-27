/*
Este programa recibe una palabra del usuario y 
mediante las funciones contar_letras,contar_vocales y
contar_consonates indica la cantidad de letras , vocales y
consonates que tiene la palabra
*/

#include <stdio.h>

int cuenta_letras(char palabra[30]){
    int posicion = 0;
    while( palabra[posicion] != 0 ){
        posicion++;
    }
    return posicion;
}

int cuenta_vocales(char palabra[30]){
    int posicion = 0, vocales=0;
    while( palabra[posicion] != 0 ){

        if( palabra[posicion]=='a' || palabra[posicion]=='e' || palabra[posicion]=='i' || palabra[posicion]=='o' || palabra[posicion]=='u'){
            vocales++;
        }

        posicion++;
    }
    return vocales;
}

int cuenta_consonantes(char palabra[30]){
    int posicion = 0, vocales=0, consonantes=0;
    while( palabra[posicion] != 0 ){

        if( palabra[posicion]=='a' || palabra[posicion]=='e' || palabra[posicion]=='i' || palabra[posicion]=='o' || palabra[posicion]=='u'){
            vocales++;
        }else{
            consonantes++;
        }

        posicion++;
    }
    return consonantes;
}

int main(){
    char word[30];
    int letras, vocales, consonates;
    //pido una palabra
    printf("Dame una palabra (maximo 30 caracteres): ");
    scanf("%s", &word);
    //obtengo numero de letras, vocales y consonantes
    letras = cuenta_letras(word);
    vocales = cuenta_vocales(word);
    consonates = cuenta_consonantes(word);
    //imprimo la cantidad de letras, vocales y consonantes
    printf("\nTu palabra tiene %d letras", letras);
    printf("\nTu palabra tiene %d vocales", vocales);
    printf("\nTu palabra tiene %d consonantes", consonates);
    return 0;
}