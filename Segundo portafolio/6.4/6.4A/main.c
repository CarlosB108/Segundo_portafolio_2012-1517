#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=3, i=1;
    printf("Este programa muestra una salida con la variable n=0\n");

    while (i <= n)
        {
        if((i % n) == 0)
            {
            ++i;
        }
    }
    printf("Resultado es = %d \n",i);

    return 0;
}
