#include <stdio.h>
#include <stdlib.h>
#define T 10

int main()
{
    int vector [T];
    int i;

   for (i=0;i<T;i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&vector[i]);
    }
printf("\n Todos los numeros: %d\n",vector[i]);
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
    }
        return 0;
}
