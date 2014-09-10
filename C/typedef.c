#include <stdio.h>

typedef struct Profesor{
    char nombre[20];
    int edad;
} maestro;

typedef struct Catedra{
    char nombre[20];
    float duracion;
    maestro catedratico;
} clase;

int main(){
    maestro unProfe = {"Daniela", 30};
    clase programacion = {"Programacion", 120, unProfe};
    return 0;
}
