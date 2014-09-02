#include <iostream>

using namespace std;

class Clase1{
    friend void amigaDeClase1(Clase1& objeto, int x);
private:
    int x;
public:
    Clase1();
    Clase1(int x);
    int getX();
};

Clase1::Clase1(){
    this->x=0;
}

Clase1::Clase1(int x){
    this->x = x;
}

int Clase1::getX(){
    return x;
}
/*** Parametro por referencia ***/
void amigaDeClase1( Clase1& objeto, int x ){
    objeto.x = x;
    cout<<"Soy la amiga objeto.x="<<objeto.x<<endl;
}

int main()
{
    Clase1 objeto_1(34);
    cout<<"objeto.x = "<<objeto_1.getX()<<endl;
    amigaDeClase1(objeto_1, 78);
    cout<<"modificado objeto.x = "<<objeto_1.getX()<<endl;
    return 0;
}
