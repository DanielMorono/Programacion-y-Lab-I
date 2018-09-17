typedef struct
{
    int legajo;
    char nombre[51];
    float altura;
    int nota;
}sAlumno; // aca se declara el nombre
//LAS FUNSIONES SE DECLARAN DEBAJO DE LAS ESTRUCTURAS

void cargarListadoDeAlumnos (sAlumno[],int); //* PARA UN
void mostrarListadoDeAlumnos (sAlumno[],int);//* ARRAY DE ALUMNOS
void mostrarUnAlumno (sAlumno);
sAlumno cargarAlumno ();
void ordenarAlumnos (sAlumno[],int);

