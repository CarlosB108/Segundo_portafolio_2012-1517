#include <stdlib.h>
#include <stdio.h>

char num[10];

int main()
{
    printf("Este programa invierte los digitos de un entero positivo dado.\n");
    printf("Ingrese el numero que desea invertir: \n");
        gets(num);

    printf("El numero ingresado es: %s \n", num );

    printf("La inversion del numero ingresado es: %s \n\n", strrev(num));
return;
}

