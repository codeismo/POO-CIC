#include <stdio.h>

struct Reservacion{
    char hotel[20];
    float costo;
};
//struct Persona es un tipo de dato
struct Persona{
    //mienbros de la estructura persona
    char nombre[20];
    int edad;
};
/*Estructura compuesta*/
struct Viaje{
    struct Persona cliente;
    struct Reservacion datosDeReservacion;
    char destino[20];
    int duracion;
};

int main(){
    /*Declarando e inicializando
     una estructura de tipo Cliente y Viaje*/
    struct Persona unCliente = {"Daniela", 30};
    struct Reservacion unaReservacion = {"Marriot", 1000};
    struct Viaje paseo = {unCliente, unaReservacion, "Acapulco", 3};

    /*** Imprimir usando la variable de tipo
    estructura Viaje (paseo) ***/
    printf("Destino %s\n", paseo.destino);
    printf("Nombre cliente: %s\n", paseo.cliente.nombre);
    printf("Edad: %d\n", paseo.cliente.edad);
    printf("Hotel: %s \n", paseo.datosDeReservacion.hotel);
    printf("Costo: %f \n", paseo.datosDeReservacion.costo);


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




