#include <stdio.h>
#include <stdlib.h>

int cargarArray(int*,int);
void mostrarArray(int*,int);

int main()
{
    //puntero = 4 bytes
    // para sacar la primer direccion de memoria de un vec
    //clase 15 en el campus
    int vec[3];

    if(cargarArray(vec,3))
    {
        printf("Carga exitosa");
    }
    else
    {
        printf("Error al cargar los datos");
    }

    mostrarArray(vec,3);

    return 0;
}
int cargarArray(int* array,int tam)
{
    int i;
    int retorno = 0;
    if(array!=NULL)
    {
        retorno =1;
        for(i=0;i<tam;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", array + i);
        }
    }
    else
    {
        printf("NULO");
    }
    return retorno;
}
void mostrarArray(int* array,int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n", *(array+i));
    }
}
