#include <stdio.h>
//clase 5
int validar_fecha (int dia, int mes){
if (mes >=1 && mes <= 12 && dia<=31 && dia>=1)
{
 return 1;
}
else{
    return 0;
}
}

int obtener_signo (int dia, int mes){
if (dia>=21 && mes==3 || dia<=20 && mes==4)
{
    return 1;
}
if (dia>=21 && mes==4 || dia<=20 && mes==5)
{
    return 2;
}
if (dia>=21 && mes==5 || dia<=20 && mes==6)
{
    return 3;
}
if (dia>=21 && mes==6 || dia<=20 && mes==7)
{
    return 4;
}
if (dia>=21 && mes==7 || dia<=21 && mes==8)
{
    return 5;
}
if (dia>=22 && mes==4 || dia<=22 && mes==5)
{
    return 6;
}
if (dia>=23 && mes==9 || dia<=22 && mes==10)
{
    return 7;
}
if (dia>=23 && mes==10 || dia<=22 && mes==11)
{
    return 8;
}
if (dia>=23 && mes==11 || dia<=20 && mes==12)
{
    return 9;
}
if (dia>=21 && mes==12 || dia<=19 && mes==1)
{
    return 10;
}
if (dia>=20 && mes==1 || dia<=18 && mes==2)
{
    return 11;
}
if (dia>=19 && mes==2 || dia<=20 && mes==3)
{
    return 12;
}
}

void mostrar_signo(int signo){
if (signo==1)
    {
        printf("\nTu signo es Aries");
    }
if (signo==2)
    {
        printf("\nTu signo es aries Tauro");
    }
if (signo==3)
    {
        printf("\nTu signo es Geminis");
    }
if (signo==4)
    {
        printf("\nTu signo es Cancer");
    }
if (signo==5)
    {
        printf("\nTu signo es Leo");
    }
if (signo==6)
    {
        printf("\nTu signo es Virgo");
    }
if (signo==7)
    {
        printf("\nTu signo es Libra");
    }
if (signo==8)
    {
        printf("\nTu signo es Escorpión");
    }
if (signo==9)
    {
        printf("\nTu signo es Sagitario");
    }
if (signo==10)
    {
        printf("\nTu signo es Capricornio");
    }
if (signo==11)
    {
        printf("\nTu signo es Acuario");
    }
if (signo==12)
    {
        printf("\nTu signo es Piscis");
    }
}

int main(){

return 0;
}

