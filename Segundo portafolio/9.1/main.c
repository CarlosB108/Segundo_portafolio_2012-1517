#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int primero[21];
   for (i=1 ; i<=6; i++)
    scanf("%d", &primero[i]);
   for(i=3; i>0; i--)
        printf("%d",primero[2*i]);
    return 0;
}
