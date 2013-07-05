#include <stdio.h>

int main()
{
     int i,j, primo;
     printf("Este programa visualiza los numeros primos del 1 al 80.\n");
     printf("Los numeros primos del 1 al 80 son:\n");
     for(i = 2; i <= 80; i++)
     {
          primo = 1;
          for(j = 2; j < i; j ++)
               if(!(i % j))
               {
                    primo = 0;
                    break;
               }

          if(primo)
               printf("%d ", i);
     }

     getchar();
     return 0;
}
