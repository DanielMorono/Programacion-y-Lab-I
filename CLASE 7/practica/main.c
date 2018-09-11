#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 3
//void insertion(int data[],int len);

void cargarAlumnos(int[], char[][21], int[], float[], int);
void mostrarAlumnos(int[], char[][21], int[], float[], int);

//crear funsiones que *ORDENEN POR NOMBRE *MUESTREN LOS ALUMNOS APROBADOS (nota>6) *MUESTRE LOS ALUMNOS QUE SE LLAMAN JUAN
// *QUE MUESTRE LOS ALUMNOS CUYO NOMBRE COMIENZA CON P *EL ALUMNO CON MAS NOTA (Sabiendo que puede ser mas de uno)
//* "El mas mediocre legajo=100 notas=5 se llame pepe medir 1.75"
//ingresar un legajp y permitir la modificacion de la nota
//transformar la carga de datos en una carga aleatoria

int main()
{
    int legajos[T];
    char nombres [T][21];
    int notas[T];
    float alturas[T];
    int i;

    cargarAlumnos(legajos, nombres, notas, alturas,T);
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
/*void insertion(int data[],int len)
    {
        int i,j;
        int temp;
        for (i=1; i<len; i++)
        {
            temp = data [i];
            j=i-1;
            while (j>=0 && temp<data[j])
            {
                data [j+1] = data [j];
                j--;
            }
            data [j+1]=temp; //insercion
        }
    {
        int i,j;
        int temp;
        for (i=1; i<len; i++)
        {
            temp = data [i];
            j=i-1;
            while (j>=0 && temp<data[j])
            {
                data [j+1] = data [j];
                j--;
            }
            data [j+1]=temp; //insercion
        }*/
