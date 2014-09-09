#include <stdio.h>

//struct Persona es un tipo de dato
struct Persona{
    //mienbros de la estructura persona
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
    struct Persona unCliente = {"Daniela", 30};
    struct Viaje paseo = {unCliente, "Acapulco", 3};
    //imprimir el destino usando viaje
    printf("Destino: %s \n", paseo.destino );
    //imprimir el nobre del cliente usando unCliente
    printf("Nombre (desde la estructura cliente): %s \n", unCliente.nombre);
    //Usando la variable paseo imprime el
    //nombre del cliente
    printf("Nombre (desde la estructura paseo):");
    printf("%s", paseo.cliente.nombre);

    return 0;
}




