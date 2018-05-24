#include <stdio.h>
#include <stdlib.h>
void funcion1a();
void funcion2a();
void funcion3a();

int main()
{

    FILE* miArchivo;
    int numero = 64;

    miArchivo = fopen("prueba1.txt","w");
    //&numero puntero del dato,sizeof el peso en bytes del dato para cualquier sistema operativo,cantidad de datos que vamos a escribir (1 int,2 int,etc), y por ultimo recibe el puntero a file (miArchivo)
    fwrite(&numero,sizeof(int),1,miArchivo); // PERMITE ESCRIBIR TEXTO Y CUALQUIER TIPO DE DATO, INCLUSIVE ESTRUCTURAS (ADAPTADO PARA ESCRIBIR EN BINARIO)

    fclose(miArchivo);

    miArchivo = fopen("prueba1.txt","r");
    fread(&numero,sizeof(int),1,miArchivo);
    fclose(miArchivo);
    printf("NUMERO: %d", numero);

    funcion1a();
    funcion2a();
    funcion3a();
    funcion4a();
    return 0;
}

void funcion1a()
{
    int numero;
    int lista[5];
    int i;
    FILE* miArchivo;

    miArchivo = fopen("prueba1.txt","w");

    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero");
        scanf("%d",numero);

        fwrite(&numero,sizeof(int),1,miArchivo);
    }
        fclose(miArchivo);
}

void funcion2a()
{
    FILE* miArchivo;
    int i;
    int lista[5]={1,4,5,6,7};
    int numero;

    miArchivo = fopen("prueba2.txt","r");
    fwrite(lista,sizeof(int),5,miArchivo);

    /*i=0;
    while(!feof(miArchivo));
    {

        if(feof(miArchivo))
        {
            break;
        }
        printf("NUMERO: %d", numero);
        i++;
    }*/
    fread(lista,sizeof(int),5,miArchivo);
    fclose(miArchivo);

    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }
}

void funcion3a()
{
    typedef struct
    {
        int a;
        char b;
    }eDato;

    FILE* miArchivo;
    eDato d[2]= {1,4,'C','B'};
    eDato d3;
    eDato d2[2];
    int i;
    miArchivo = fopen("miBinario.dat","wb");

    fread(d2, sizeof(eDato),2,miArchivo);
    fclose(miArchivo);

    if (miArchivo!=NULL)
    {
        fwrite(&d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);

        for(i=0;i<2;i++)
        {
            printf("%d -- %c\n",d);
        }
    }
}

void funcion4a()
{
    typedef struct
    {
        int a;
        char b;
    }eDato;

    FILE* miArchivo;
    eDato d = {1,'B'};
    miArchivo = fopen("miBinario.dat","rb");

    if (miArchivo!=NULL)
    {
        fread(&d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);

        printf("%d -- %c", d.a, d.b);
    }
}
