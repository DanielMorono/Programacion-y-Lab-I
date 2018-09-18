#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define T 5

/** \brief busca espacio disponible
 *
 * \param int[] listado de enteros
 * \param int tamaño del listado
 * \param int el valor ilogico
 * \return int [-1] si no hay espacio, se devuelve [>=0] un indice donde guardar
 *
 */
int buscarLibre (int[],int,int);

int main()
{
    //crear vector de enteros
    //inicializarlo a -1
    //do-while pidiendo datos

    int vector [T];
    int i;
    char opcion;
    int indice;

    for (i=0;i<T;i++)
    {
        vector[i]=-1;
    }

    do
    {
      indice = buscarLibre(vector,T,-1);
      if (indice !=-1)
      {
        printf("Ingrese un entero: \n");
        scanf("%d",&vector[indice]);
      }
        else
        {
            printf("No hay mas lugar.");
            break;
        }

        printf("Desea ingresar otro? \n");
        opcion = getche();
        }while(opcion != 'n');
    return 0;
}

int buscarLibre (int numeros[],int tam,int ilogico)
{
    int index=-1;
    int i;
    for (i=0; i<tam; i++)
    {
        if(numeros[i]==ilogico)
        {
            index = i;
            break;
        }
    }
    return index;
}


