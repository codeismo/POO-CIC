#include <iostream>
#include "Fecha.h"

using namespace std;


Fecha::Fecha(){
    this->setDia(1);
    this->setMes(1);
    this->setAnio(1920);
}
Fecha::Fecha(int d, int m, int a){
    cout<<"Constructor Fecha con argumentos"<<endl;
    this->setDia(d);
    this->setMes(m);
    this->setAnio(a);
}

/*De 1 a 31
devuelve 1 si se establece el dia y 0 sino*/
int Fecha::setDia(int d){
    if( d>=1 && d<=31 ){
        dia=d;
        return 1;
    }else{
        return 0;
    }
}

/*De 1 a 12
devuelve 1 si se establece el mes y 0 sino*/
int Fecha::setMes(int m){
    if( m>=1 && m<=12 ){
        mes=m;
        return 1;
    }else{
        return 0;
    }
}

/*de 1920 a 2014
devuelve 1 si se establece el anio y 0 sino*/
int Fecha::setAnio(int a){
    if( a>=1920 && a<=2014 ){
        anio=a;
        return 1;
    }else{
        return 0;
    }
}

int Fecha::getDia(){
    return dia;
}

int Fecha::getMes(){
    return mes;
}

int Fecha::getAnio(){
    return anio;
}

int Fecha::estableceFecha(int d, int m , int a){
  //this->setDia(d)
  //(*this).setDia(d)

    if ( this->setDia(d)==1 && (*this).setMes(m)==1 && setAnio(a)==1 ){
        return 1;
    }else{
        return 0;
    }

}

/*EJ: 27 - 08- 2014*/
void Fecha::imprimeFechaNumerica(){
    cout<<dia<<" - "<<mes<<" - "<<anio<<endl;
}

/*27 de Agosto de 2014*/
void Fecha::imprimeFechaEstandar(){

}
