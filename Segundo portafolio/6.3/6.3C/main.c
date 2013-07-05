#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, suma=0;
    printf("Este programa suma numeros enteros del 11 al 50.\n");
    for (num=11; num<51 ; num++)

        {
            suma=num + suma;
        printf("%d \n",num);
        }

        printf("el resultado es:%d\n",suma);

    return 0;
}
