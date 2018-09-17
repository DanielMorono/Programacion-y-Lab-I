#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"
#define A 2

int main()
{
    //sizeof muestra cuanto espacio tiene en memoria
    //No hay mascara para este tipo de dato

    sAlumno listadoAlumnoMain[A];

    cargarListadoDeAlumnos(listadoAlumnoMain,A);

    ordenarAlumnos(listadoAlumnoMain,A);

    mostrarListadoDeAlumnos(listadoAlumnoMain,A);



return 0;
}
