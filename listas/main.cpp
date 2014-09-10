#include <iostream>

using namespace std;

struct Item{
    int numero;
    char letra;
    Item *ptrItem;
};

void inicializarLista(Item *ptrRaiz, Item *ptrUltima){
    *ptrRaiz= {1, 'a', NULL};
    ptrUltima = ptrRaiz;
}

void imprimirLista(Item raiz){
    cout<<"Lista"<<endl;
    Item siguiente = raiz;
    do{
        cout<<"Numero "<<siguiente.numero<<" letra "<<siguiente.letra<<endl;
        cout<<"siguiente "<<siguiente.ptrItem<<endl;

        siguiente = *(siguiente.ptrItem);

    }while( siguiente.ptrItem != 0 );
}

void insertar(Item *ptrRaiz, Item nuevoItem){
    nuevoItem.ptrItem = ptrRaiz;
    *ptrRaiz = nuevoItem;
}

int main()
{
    Item raiz, ultima, nuevo={2, 'b', NULL};
    inicializarLista(&raiz, &ultima);
    imprimirLista(raiz);
    insertar(&raiz, nuevo);
    imprimirLista(raiz);
    return 0;
}
