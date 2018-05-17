#include <stdio.h>
#include <stdlib.h>
void intercambiar(int num1,int num2);
void intercambiarConPunteros(int *num1,int *num2);
void ponerEnCero(int *num1);
int main()
{
    int edadUno;
    int edadDos;
    edadUno = 22;
    edadDos = 99;

    ponerEnCero(&edadDos);
    // intercambiar(edadUno,edadDos);
    intercambiarConPunteros(&edadUno,&edadDos);
    printf("edad 1:%d\n",edadUno);
    printf("edad 2:%d",edadDos);
    return 0;
}

void intercambiar(int num1,int num2)
{
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}

void ponerEnCero(int *num1)
{
    *num1 = 0;
}
void intercambiarConPunteros(int *num1,int *num2)
{
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

