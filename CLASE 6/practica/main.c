#include <stdio.h>
#include <stdlib.h>

int inicializarVector(int[],int,int);//Siempre que tenga que pasar un vector hay que pasar estos dos parametros minimo
int mostrarVector(int[], int);
int main()
{
   int miArrayDelMain[10];
   inicializarVector(miArrayDelMain,10,-1);
   mostrarVector(miArrayDelMain,10);

    return 0;
}

int inicializarVector(int parametroVector[],int cantidad, int valorDeInicio)
{
    for ( ;cantidad>0;cantidad--)
    {
        parametroVector[cantidad]=valorDeInicio;
    }
}

int mostrarVector(int vector[], int cantidad)
{
    for ( ;cantidad>0;cantidad--)
    {
        printf("%d\n",vector[cantidad]);
    }
}
