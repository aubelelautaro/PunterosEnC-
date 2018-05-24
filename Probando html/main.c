#include <stdio.h>
#include <stdlib.h>
int main ()
{
    FILE* f;
    char msj[12]="HOLA LAURA";

    f = fopen ("mihtml.html","w");

    if (f!=NULL)
    {
        fprintf(f,"<html><head> HOLA </head></html>");
        /*fprintf("<html><head>"); ------------------ ARREGLAR
        fprintf(msj);
        fprintf("</head></html>")
        */
        fprintf(f,"<body> ME ESTOY MAREANDO CON TANTAS COSAS </body>");
    }
}
