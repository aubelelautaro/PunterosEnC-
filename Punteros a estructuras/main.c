#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}dato;

int main()
{
    dato d;
    d.a=5;
    d.b='<';

    dato* pDato;
    pDato = &d;

    printf("%d--%c\n", pDato->a, pDato->b);

    // &pDato = direccion de memoria donde se encuentra el puntero
    // pdato = direccion de memoria donde se almacena la estructura
    // *pdato = d

    printf("%d--%c",d.a,d.b);
    return 0;
}
