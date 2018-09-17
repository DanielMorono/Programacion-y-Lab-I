#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3

void cargarAlumnos(int[], char[][21], int[], float[], int);
void mostrarAlumnos(int[], char[][21], int[], float[], int);
void ordenarAlumnos(int[], char[][21], int[], float[], int);

int main()
{

    int legajos[T];
    char nombres [T][21];
    int notas[T];
    float alturas[T];

    cargarAlumnos(legajos, nombres, notas, alturas,T);
    mostrarAlumnos(legajos, nombres, notas, alturas,T);
    ordenarAlumnos(legajos, nombres, notas, alturas,T);
    printf("Ordenado:\n");
    mostrarAlumnos(legajos, nombres, notas, alturas,T);

    return 0;
}

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int i;
    for (i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);

        printf("Ingrese altura: ");
        scanf("%f", &alturas[i]);

    }
}

void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    printf("%4s %20s %2s %5s\n","Legajo" , "Nombre" , "Nota" ,   "Alturaç");
    int i;
    for (i=0; i<T; i++)
    {
        printf("%4d %20s %2d %.2f\n",legajos[i],nombres[i],notas[i],alturas[i]);
    }
}

void ordenarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int auxInt;
    float auxFloat;
    char auxString[100];

    int i;
    int j;

    for (i=0; i<tam-1; i++)
    {
        for (j=i+1;j<tam; j++)
        {
            if(strcmp(nombres[i], nombres[j]>0))
               {
                    strcpy(auxString,nombres[i]);
                    strcpy(nombres[i], nombres[j]);
                    strcpy(nombres[j], auxString);

                    auxInt = legajos[i];
                    legajos[i] = legajos[j];
                    legajos[j] = auxInt;

                    auxInt = notas[i];
                     notas[i]= notas[j];
                      notas[j]=auxInt;

                    auxInt = alturas[i];
                     alturas[i]= alturas[j];
                      alturas[j]=auxInt;
               }
        }
    }
}
