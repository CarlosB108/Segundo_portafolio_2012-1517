#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    int primero[21];
    for(i = 0 ; i < 10 ; i++)
        primero[i]= i + 3;
    scanf("%d %d ", &j , &k);
    for(i=j; i<=k;)
        printf("%d\n",primero[i++]);

    return 0;
}
