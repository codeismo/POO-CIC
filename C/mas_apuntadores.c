#include <stdio.h>

void duplicarNumero(int *ptrNum){
    *ptrNum; /** es el valor al que apunta **/
    ptrNum;  /** la direccion a la que apunta **/
    //= (*ptrNum) * 2;
}

int main(){
    int numero = 8;
    int *apuntadorNumero = &numero;
        /** Los apuntadores guardan direcciones **/
    /** La direccion de una variable
    por ejemplo miVariable &miVariable **/
    /** MAL_ la funcion debe recibir un apuntador
    (direccion de memoria) y se esta enviando
    un entero --- duplicarNumero( numero ); */
    /** * solo se usa cuando declaras los
    apuntadores (Linea 11) o cuando quiseres acceder
    al valor al que apunta un apuntador
    nuemro NO ES UN APUNTADORM ES UN ENTERO
    duplicarNumero( *numero ); **/
    /**MAL!! ESTAS ENVIANDO UN NUMERO Y
    NO UN APUNTADOR
    duplicarNumero( *apuntadorNumero );
    duplicarNumero( numero );**/
    duplicarNumero( &numero );
    duplicarNumero( apuntadorNumero );

    return 0;
}
