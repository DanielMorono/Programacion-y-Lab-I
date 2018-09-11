#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[21];
    char apellido[21];
    int cantidadCaracteresNombre;
    int cantidadCaracteresApellido;

    printf("Ingrese su nombre: \n");

    fflush(stdin);
    gets(nombre);
    cantidadCaracteresNombre = strlen(nombre);

    while (cantidadCaracteresNombre >20)
    {
        system("pause");
        system("cls");
        printf("El nombre es muy largo, ingrese un nombre valido: \n");
        fflush(stdin);
        gets(nombre);
        cantidadCaracteresNombre = strlen(nombre);
    }

    system("pause");
    system("cls");

    printf("Ingrese su apellido: \n");

    fflush(stdin);
    gets(apellido);
    cantidadCaracteresApellido = strlen(apellido);

     while(cantidadCaracteresApellido>20)
    {
        system("pause");
        system("cls");
        printf("El apellido es muy largo, ingrese un apellido valido: \n");
        fflush(stdin);
        gets(apellido);
        cantidadCaracteresApellido = strlen(apellido);
    }

    system("pause");
    system("cls");

    printf("%s\n",nombre);
    printf("%s\n",apellido);
    printf("%d\n",cantidadCaracteresNombre);
    printf("%d\n",cantidadCaracteresApellido);
    return 0;
}
