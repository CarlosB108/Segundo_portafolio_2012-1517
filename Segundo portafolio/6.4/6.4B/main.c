#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i= 1, n=1;
    printf("Este programa muestra una salida con la variable n=1\n");
    while(i <= n)
        {
        if((i% n)==0){
            ++i;
        }
    }
    printf("%d \n",i);
    return 0;
}
