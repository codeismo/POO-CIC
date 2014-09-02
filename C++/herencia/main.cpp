#include <iostream>

using namespace std;
/*** Clase Animal ***/
class Animal{
protected:
    string nombre;
private:
    int edad;
public:
    Animal();
    Animal(string n, int e);
    string getNombre();
    int getEdad();
};
 Animal::Animal(){
    nombre = "Animalito";
    edad = 0;
 }
 Animal::Animal(string n, int e){
    nombre = n;
    edad = e;
 }
 string Animal::getNombre(){
    return nombre;
 }
int Animal::getEdad(){
    return edad;
}
 /*** Clase Gato Hereda de Animal***/
 class Gato:public Animal{
private:
    string color;
public:
    Gato();
    Gato(string c);
    string getColor();
 };

Gato::Gato(){
    color = "azul";
}
Gato::Gato(string c){
    color = c;
}
string Gato::getColor(){
    return color;
}

int main()
{
    Gato gatito;
    return 0;
}
