#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i= 1, n=3;
    printf("Este programa muestra una salida con la variable n=3\n");
    while(i <= n)
        {
        if((i% n)==0){
            ++i;
        }
    }
    printf("Resultado es = ;%d \n",i);
    return 0;
}
