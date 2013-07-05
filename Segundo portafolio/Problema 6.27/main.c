#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("Este probrama visualiza las letras de mayusculas a minusculas con la tabla ASCII.\n");
    for(c='A';c <='Z';c++)
        printf("%c ",c);


    int d;
    for(d='a';d <='z';d++)
    printf("%c ",d);

    return 0;
}
