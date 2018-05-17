#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[11]="MiNombre";
    char *apellido="Apellido";
    char *puntero;
    int i;
    puntero= nombre;
    printf("%s ",nombre);
    printf("%s\n",apellido);
    printf("%s\n",puntero);

    /*
    EJEMPLO PARA UN CODIGO MAS AGIL
    for(i=0;*(apellido+i)!='\0';i++)
    {
        printf("%c",*(apellido+i));
    }
    */
    printf("%s",apellido);
    return 0;
}
