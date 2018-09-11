#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41]; // "";
    char buffer [1024];
    int i;

    printf("Ingrese su nombre: \n");

    fflush(stdin);
    gets(buffer);

    while (strlen(buffer) > 19)
    {
        system("pause");
        system("cls");
        printf("El nombre es muy largo, ingrese un nombre valido: \n");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(nombre,buffer);
    system("pause");
    system("cls");

    printf("Ingrese su apellido: \n");

    fflush(stdin);
    gets(buffer);


     while(strlen(buffer) > 19)
    {
        system("pause");
        system("cls");
        printf("El apellido es muy largo, ingrese un apellido valido: \n");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(apellido,buffer);

    strcpy(nombreCompleto,apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0]=toupper(nombreCompleto[0]);

    for(i=0; i< strlen(nombreCompleto); i++)
    {
        if(nombreCompleto[i]== ' ') // isspace(nombreCompleto[1]))
            {
                nombreCompleto[i+1] = toupper(nombreCompleto[i+1]);
            }
    }


    puts(nombreCompleto);

    system("pause");
    system("cls");

    return 0;
}
