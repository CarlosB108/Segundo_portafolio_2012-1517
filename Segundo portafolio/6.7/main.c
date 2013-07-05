#include <stdio.h>
#include <stdlib.h>

int main()

{
    long int num, x,y, factorial=1, suma=0;
    printf("Este programa factoriza el valor de numero digitado por un usuario.\n");
    printf("Digite el valor del n%cmero que quiere factorizar\n", 163);
    scanf("%d", &y);

    for (num=0; num <= y; num++)

    {
        for (x = num; x > 1; x--)
        {
            factorial = factorial * x;
        }
        printf(" %d! = %d \n",num, factorial);
         suma += factorial;
    }
       printf("La suma es: %d", suma);

       return 0;
}
