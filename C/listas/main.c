#include <stdio.h>

struct Persona{
    char nombre[20];
    int edad;
};
/*Estructura compuesta*/
struct Viaje{
    struct Persona cliente;
    char destino[20];
    int duracion;
};

int main(){
    /*Declarando e inicializando
     una estructura de tipo Cliente y Viaje*/
    struct Cliente unCliente = {"Daniela", 30};
    struct Viaje paseo = {unCliente, "Acapulco", 3};
    //Usando la variable paseo imprime el
    //nombre del cliente

    return 0;
}




