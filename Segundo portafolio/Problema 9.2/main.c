#include <stdio.h>

int main(){

   int arreglo[9];
   int x=0,lineas, i, j;
   printf("Digite la cantidad de lineas que desea tener en el triangulo de pascal.\n");
   scanf("%d",&lineas);
   for (i=1; i<=lineas ; i++)
   {
      for (j=x; j>=0; j--)
         {
             if(j==x || j==0)
                  arreglo[j] = 1;
             else arreglo[j] = arreglo[j] + arreglo[j-1];
         }

        x++;
        printf("\n");

        for (j=1; j<=lineas-i; j++)
             printf("   ");

        for(j=0; j<x; j++)
        {
             printf("%3d   ", arreglo[j]);
        }
   }
return 0;
}
