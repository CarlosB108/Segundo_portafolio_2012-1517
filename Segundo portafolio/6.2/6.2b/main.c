#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n=2;
    for(;n > 0; n= n-0.5)
        printf("%lg",n);
    return 0;
}
