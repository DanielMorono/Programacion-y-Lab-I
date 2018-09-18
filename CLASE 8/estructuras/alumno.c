#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"

void mostrarUnAlumno (sAlumno miAlumno)
{
     printf("Legajo: %d\nNombre: %s \nAltura: %.2f\nNota: %d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);

}

sAlumno cargarAlumno ()
{
    sAlumno miAlumno;
     printf("Ingrese legajo: \n");
    scanf("%d", &miAlumno.legajo);


    printf("Ingrese nombre: \n");
    fflush(stdin);
    gets(miAlumno.nombre);


    printf("Ingrese altura: \n");
    scanf("%f", &miAlumno.altura);

    printf("Ingrese nota: \n");
    scanf("%d", &miAlumno.nota);

    system("pause");
    system("cls");
    return miAlumno;
}

void cargarListadoDeAlumnos (sAlumno listadoAlumnoMain[],int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        listadoAlumnoMain[i] = cargarAlumno();
    }
}

void mostrarListadoDeAlumnos(sAlumno listadoAlumnoMain[],int tam)
{
    int i;

    for (i=0; i<tam; i++)
    {
        mostrarUnAlumno(listadoAlumnoMain[i]);
    }
}

void ordenarAlumnos(sAlumno listado[],int tam)
{
   int i;
    int j;
    sAlumno aux;

for (i=0; i<tam-1 ;i++)
    {
      for (j=i+1 ; j<tam ; j++)
        {
            if (strcmp(listado[i].nombre, listado[j].nombre)> 0)
            {
                aux = listado[i];
                listado[i]=listado[j];
                listado[j]= aux;
            }
        }
    }
}

void modificarListadoDeAlumnos (sAlumno listado[],int tam)
{
    int legajo;
    int i;
    printf("Ingrese un legajo a buscar: ");
    scanf("%d", &legajo);
    for(i=0; i<tam; i++)
    {
        if(legajo == listado[i].legajo)
        {
            //mostrar el alumno
            //pedir nueva nota
            //pregunto si esta seguro de realizar la modificacion
            //si hago la asignacion
            //no aviso que se cancelo
        }
    }
}
