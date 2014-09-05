#include <stdio.h>

void porReferenciaConst(const int *x){
   // *x=2;
}

void apuntadores(){
    int x= 8;
    int *ptrX=&x;
    printf("valor de X %d\n",*ptrX);
    printf("valor de x %d\n",x);
    printf("dir de X %p\n",ptrX);
    printf("dir de x %p\n",&x);
}

void porValor(int x){
x=2;
}

void porReferencia(int *x){
*x=2;
}


void apuntadoresYEstructuras(){
struct Cliente
    {
        char *nombre[34];
        int *edad;
        //apuntador a una estructura del mismo tipo
        struct Cliente *ptrCliente;
    } cl1, *ptrUnCliente;

    //un arreglo de clientes o un apuntador a cliente
    //struct Cliente arrClientes[3];
    *cl1.nombre ="Daniela";
    *cl1.edad=30;

    ptrUnCliente = &cl1;

    printf("Mi cliente %s\n", *(*ptrUnCliente).nombre);
    printf("Mi cliente edad %d\n", *(*ptrUnCliente).edad);}

void estructuras(){
    struct cliente{
		char nombre[20];
		int edad;
	};

    struct viaje{
		struct cliente viajero;
		float costo;
	};
    struct cliente cl3 = {"Daniela", 3};
    struct viaje viaje1 = {cl3, 45.8};
    struct viaje viaje2 = { {"Juan", 18} , 45.8};

	printf("Mi cliente 3 es %s\n", cl3.nombre);
	printf("Mi cliente 3 edad %d\n", cl3.edad);
	//Datos del viaje 1
	printf("Mi cliente 3 es %s\n", viaje2.viajero.nombre);
	printf("Mi cliente 3 edad %f\n", viaje2.costo);
}

int main(){
    //int y=0;
	estructuras();
	//printf("Y es %d", y);
	return 0;
}
