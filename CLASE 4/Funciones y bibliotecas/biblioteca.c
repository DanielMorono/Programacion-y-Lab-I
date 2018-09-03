#include <stdio.h>
#include "biblioteca.h"
int pedirEntero (char texto[])
{
    int numero;

    printf("%s", texto);  //mascara para mostrar cadena de char, streen
    scanf("%d", &numero);

    return numero;
}
