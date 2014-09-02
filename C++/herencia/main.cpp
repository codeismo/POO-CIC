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
    void comer();
};
 Animal::Animal(){
    nombre = "Animalito";
    edad = 10;
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

void Animal::comer(){
    cout<<"Animal comiendo"<<endl;
}
 /*** Overeading Clase Gato Hereda de Animal***/
 class Gato:public Animal{
private:
    string color;
public:
    Gato();
    Gato(string c, string n, int e);
    string getColor();
    void mostrarInfo();
    void comer();
 };

Gato::Gato(){
    color = "azul";
}
Gato::Gato(string c, string n, int e):Animal(n, e){
    color = c;
}
string Gato::getColor(){
    return color;
}

void Gato::mostrarInfo(){
    /** Es privado pero es propio de la Clase Gato **/
    cout<<"Color del gato "<<(*this).color<<endl;
    /** Es protegido y lo heredo de la Clase Animal**/
    cout<<"Nombre del gato "<<this->nombre<<endl;
    /** Lo heredo de la clase Animal pero es privado
    cout<<"Edad del gato "<<(*this).edad<<endl;**/
    cout<<"Edad del gato "<<(*this).getEdad()<<endl;
}

/*** Sobrecarga de Métodos ***/
void Gato::comer(){
    cout<<"miau miau"<<endl;
}

/*** Clase Pollo ***/
class Pollo:public Animal{
public:
    Pollo();
    Pollo(string n, int e);
    void comer();
};
Pollo::Pollo(){
    nombre = "Pollito";
}
Pollo::Pollo(string n, int e):Animal(n, e){
}
void Pollo::comer(){
    cout<<"pio pio"<<endl;
}
int main()
{
    Gato gatito("amarillo", "Felix", 3);
    gatito.mostrarInfo();
    gatito.comer();
    return 0;
}
