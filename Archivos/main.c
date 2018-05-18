#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *fp; //para manipular archivos, se declara un puntero para representar al archivo

    char buffer[100]="Esto es un texto dentro del fichero";
    char bufferIn[100];

    fp = fopen("fichero.txt","w"); // se abre el archivo y elige donde se va a guardar, y si se escribe o lee (w o r)

    fprintf(fp, buffer); // que archivo y que texto se quiere pasar e imprime el mensaje en el archivos, no en la consola
    fprintf(fp,"%s", "NOMBRE DE LA VARIABLE");

    fclose(fp); //se utiliza para cerrar el archivo

    fp = fopen("fichero.txt","r");
    if (fp == NULL)
    {
        printf("Archivo no encontrado");
    }
    else
    {
        while(!feof(fp)) // feof = find end of file, mientras no sea el final del archivo, que lea todo
        {
            fgets(bufferIn,100,fp); // tomar lo del archivo ingresa en la consola y lo transforma a string y se guarda en bufferIn
            puts(bufferIn);
        }

    }

    fclose(fp);

    return 0;
}
