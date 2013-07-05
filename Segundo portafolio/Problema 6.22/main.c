#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 50;
    int sum = 0;
    printf("Este programa calcula la suma de los 50 primeros numeros enteros.\n");
    printf("Los 50 primeros numeros enteros son:\n");
    for(; N > 0; N--)
    {

        printf("%d \t %d \n", N, sum += N);
    }
    return 0;
}
