#include <stdio.h>

/** Cliente no es una variable!!!
struct Cliente es un nuevo tipo,
como int, float, char apuntadores, arreglos**/
struct Cliente{
   /** Solo se declaran y no se inicializan**/
   char nombre[20];
   char apellido[20];
   int edad;
};

void imprimeDatos(struct Cliente c){
    printf("Mi cliente se llama %s \n se apellida %s \ntiene %d\n\n", c.nombre, c.apellido, c.edad);
}

int main(){
    /** cree la variable cliente_1 que es de tipo
    "struct Cliente" **/
    /** Se declrando (creando) pero no se esta
    inicializando**/
    struct Cliente cliente_1;
    /** Para acceder a los miembros de la
    estrcutura usamos el operador . **/
    cliente_1.nombre[0] = 'A';
    cliente_1.nombre[1] = 'n';
    cliente_1.nombre[2] = 'a';
    cliente_1.apellido[0] = 'R';
    cliente_1.apellido[1] = 'u';
    cliente_1.apellido[2] = 'i';
    cliente_1.apellido[3] = 'z';
    cliente_1.edad = 30;
    struct Cliente cliente_2= {"Daniela", "Aguirre", 30 };

    imprimeDatos(cliente_1);
    imprimeDatos(cliente_2);
    return 0;
}
