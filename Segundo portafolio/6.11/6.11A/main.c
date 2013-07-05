#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5,j,i;
    for(i=0; i<n; i++)
    {
        for(j=0; j < i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
