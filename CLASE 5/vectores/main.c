#include <stdio.h>
#include <stdlib.h>
#define T 10

int main()
{
    int vector [T] = {4,2,3,1,5,34,33,8,9,12};
    int i;
    int j;
    int aux; //tiene que ser del mismo tipo de datos que estoy ordenando

    for (i=0; i<T-1 ;i++)     //ORDENAR CON METODO DE BURBUJEO
    {
      for (j=i+1 ; j<T ; j++)
        {
            if (vector[i] < vector[j])
            {
                aux = vector[i];                    //SWAP
                vector[i]=vector[j];
                vector[j]= aux;
            }
        }

    }


   /*for (i=0;i<T;i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&vector[i]);
    }
printf("\n Todos los numeros: \n");
    for (i=0;i<T;i++)
    {
        printf("%d\n",vector[i]);
    }
printf("\n Todos los numeros pares: \n");
       for (i=0;i<T;i++)
    {
        if(vector[i]%2==0)
        {
        printf("%d\n",vector[i]);
        }
    }*/
        return 0;
}
