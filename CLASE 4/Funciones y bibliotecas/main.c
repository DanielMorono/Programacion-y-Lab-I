#include <stdio.h> //guarda funciones de entrada y salida de datos
#include <stdlib.h>
#include "biblioteca.h"


//int pedirEntero (char[]);
int main()
{
    int edad;
    int nota;
    int legajo;
    int numero;
    int peso;

    numero = pedirEntero("Ingrese un numero: \n"); // parametro actual
    printf("El numero es: %d\n",numero);

    edad = pedirEntero("Ingrese edad: \n");
    printf("La edad es: %d\n",edad);

    nota = pedirEntero("Ingrese nota: \n");
    printf("La nota es: %d\n",nota);

    legajo = pedirEntero("Ingrese legajo: \n");
    printf("El legajo es: %d\n",legajo);

    peso = pedirEntero("Ingrese peso: \n");
    printf("El peso es: %d\n",peso);

    return 0;
}
/*funcion generica (Pide un numero entero)
int pedirEntero (char texto[]) // parametro formal
{
    int numero;

    printf("%s", texto);  //mascara para mostrar cadena de char, streen
    scanf("%d", &numero);

    return numero;
} */
