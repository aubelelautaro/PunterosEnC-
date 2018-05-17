#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero;
    int numero;
    int numeroDos;
    numero=66;
    punteroNumero=&numero; // si esto no esta, el puntero no tiene valor

    numeroDos=&numero; // asignacion de memoria
    printf("a -%d\n",numeroDos);
    //*punteroNumero=&numero; NO!
    //*punteroNumero = 55;      NO!
    numeroDos=*punteroNumero; // asignacion de valor
    printf("b - %d\n",numeroDos);

    printf("c -%d\n",numero);

    printf("d -%d\n",&numero); //direccion de memoria del numero
    printf("e -%p\n",punteroNumero); //direccion de memoria donde esta el numero
    printf("f -%p\n",&punteroNumero); //direccion de memoria del puntero (de puntero a puntero)
    printf("g -%d",*punteroNumero); //da error cuando no tiene algun valor inicializado
    return 0;
}
