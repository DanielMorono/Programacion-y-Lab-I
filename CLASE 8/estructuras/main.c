#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "alumno.h"
#define A 3
int main()
{
     sAlumno listadoAlumnoMain[A];
     int i;
     for (i=0; i<A; i++)
     {
         listadoAlumnoMain[i].estado=-1;
     }

    char opcion;
    do
    {
        printf("a. Alta de alumno\no. Ordenar lista de alumnos\nm. Mostrar listado\nM. Modificar\ns. Salir\n");
        printf("Ingrese una opcion: ");
        opcion=getche ();
        switch(opcion)
        {
        case 'a':
            cargarListadoDeAlumnos(listadoAlumnoMain,A);
            break;
        case 'o':
            ordenarAlumnos(listadoAlumnoMain,A);
            break;
        case 'm':
            mostrarListadoDeAlumnos(listadoAlumnoMain,A);
            break;
        case 'M':
            modificarListadoDeAlumnos(listadoAlumnoMain,A)
        }

    }while(opcion !='s');

return 0;
}
