#include <stdio.h>
#include <stdlib.h>

void mostrar(int *puntero,int cant);
int main()
{
    int numeros[3];
    int *puntero;

    puntero =numeros;

    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;

    //ARITMETICA DE PUNTEROS, EL ASTERISCO SIRVE PARA MOSTRAR EL CONTENIDO DE ESA VARIABLE
    printf("\nPuntero: %d\n\n",*(puntero));
    printf("\nPuntero: %d\n\n",*(puntero+1));
    printf("\nPuntero: %d\n\n",*(puntero+2));
    printf("\nPuntero: %d\n\n",*(puntero+3));
    printf("\nPuntero: %d\n\n",*(puntero+4));

    mostrar(numeros,3);
    return 0;
}

void mostrar(int *puntero,int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        printf("\nA -Numero: %d",puntero+i); // direccion de memoria
        printf("\nB -Numero: %d",*(puntero+i)); // numeros en cada direccion
        printf("\nC -Numero: %d",(*puntero+i)); //suma de a 1
    }
}
