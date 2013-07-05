#include <stdio.h>
#include <stdlib.h>

int main()
{
    int perfect=0;
    int x,y;
    printf("Este programa imprime los 3 primeros numeros perfectos pares\n");
    printf("Los tres primeros numeros perfectos pares son:\n");
    for (x=1;x<=500;x++)
    {
        if(x%2==0)
        {
            for(y=1;y<x;y++)
            {
                 if(x%y==0)
                 {
                    perfect+=y;
                 }
           }
        }
        if (perfect==x)
        {
            printf("%d\n",perfect);
        }
        perfect=0;
    }

    return 0;
}
