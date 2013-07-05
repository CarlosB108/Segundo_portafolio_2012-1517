#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,k;
    int primero[21];

    for(j=0; j<7; )
    scanf("%d",&primero[j++]);
    i=0;
    j=1;
    while((j<6) && (primero[j-i]<primero[j]))
    {
        i++, j++;
    }
    for(k=-1; k < j + 2;)
    printf("%d",primero[++k]);
    return 0;
}
