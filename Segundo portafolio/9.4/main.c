#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,k;
    int primero[21],segundo[21];
    for(i=0; i<12; i++)
        scanf("%d",&primero[i]);
    for (j=0; j<6; j++)
        segundo[j]=primero[2*j]+ j;
    for(k=3; k<=7;k++)
        printf("%d %d\n",primero[k+1],segundo [k-1]);
    return 0;
}
