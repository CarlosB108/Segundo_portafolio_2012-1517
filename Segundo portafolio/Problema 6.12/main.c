#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N=2;
    float suma,x;
    printf("Este programa calcula la suma usando una variable N con una divisi%Cn:\n",162);
    printf("Introduzca el numero\n");
    scanf("%f", &x);

    for(N=2;N<=x;N++)
{

        suma+= 1/N;
}

    printf("%f", suma);

    return 0;
}
