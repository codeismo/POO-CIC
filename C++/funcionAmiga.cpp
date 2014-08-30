#include <iostream>

using namespace std;

class Clase1{
friend void cambiaX( Clase1 o, int x );
private:
    int x;
public:
    /*Constructor por default*/
    Clase1();
    Clase1( int x );
    int getX();
    int setX( int x );
};

Clase1::Clase1(){
    cout<<"Constructor por default..."<<endl;
    x = 99;
}

Clase1::Clase1( int x ){
    cout<<"Constructor con argumentos..."<<endl;
    /***this->x = x;***/
    (*this).x = x;
}
/*devuelven el valor de un atributo*/
int Clase1::getX(){
    return x;
}
/*asignan un valor a un atributo*/
int Clase1::setX(int x){
    this->x = x;
    return 1;
}

/*** Funcion cambia X ***/
void cambiaX( Clase1 o, int x ){
    o.x = x;
    cout<<"o.x = "<< o.getX() <<endl;
}

int main()
{
    Clase1 objeto1;
    cout<<"objeto1.x = "<< objeto1.getX() <<endl;
   // Clase1 objeto2(5);
   // cout<<"objeto2.x = "<< objeto2.getX() <<endl;
    /**intenta cambiar**/
    cambiaX(objeto1, 7);
    cout<<"objeto1.x = "<< objeto1.getX() <<endl;
}
