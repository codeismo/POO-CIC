#include <stdio.h>

void porReferenciaConst(const int *x){
*x=2;
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
        char *nombre;
        int *edad;
        //apuntador a una estructura del mismo tipo
        struct Cliente *ptrCliente;
    } cl1, *ptrUnCliente;

    //un arreglo de clientes o un apuntador a cliente
    //struct Cliente arrClientes[3];
    cl1.nombre ="Daniela";
    cl1.edad=30;

    ptrUnCliente = &cl1;

    printf("Mi cliente %s\n", *ptrUnCliente->nombre);
    printf("Mi cliente edad %d\n", *ptrUnCliente->edad);}

void estructuras(){
struct cliente{
		char nombre[20];
		int edad;
	};

	struct cliente cl3 = {"Daniela", 3};

	printf("Mi cliente 3 es %s\n", cl3.nombre);
	printf("Mi cliente 3 edad %d\n", cl3.edad);
}

int main(){
int y=0;
	porReferencia(&y);
	printf("Y es %d", y);
	return 0;
}
