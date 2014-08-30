#include <iostream>

using namespace std;

#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha{
friend string nombreMes(Fecha f);
private:
    int dia;
    int mes;
    int anio;
public:
    /*************** CONSTRUCTORES ***************/
    Fecha();
    Fecha(int d, int m, int a);
    /************* GETTERS Y SETTERS *************/
    int setDia(int d);/*De 1 a 31*/
    int setMes(int m);/*De 1 a 12*/
    int setAnio(int a);/*de 1920 a 2014*/
    int getDia();
    int getMes();
    int getAnio();
    /************ METODOS DE FUNCIONALIDAD ***********/
    int estableceFecha(int d, int m , int a);
    void imprimeFechaNumerica();/*EJ: 27 - 08- 2014*/
    void imprimeFechaEstandar();/*27 de Agosto de 2014*/
};

#endif // FECHA_H_INCLUDED
