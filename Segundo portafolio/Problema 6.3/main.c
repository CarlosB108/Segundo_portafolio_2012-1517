#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num1,suma;
    double media;
    printf("Este programa calcula y visualiza el numero mas grande ,mas pequeno y da la media de los numeros dados.\n ");
    printf("Digite el valor del primer numero\n");
    scanf("%d",&num);
    printf("Digite el valor del segundo numero\n");
    scanf("%d",&num1);
    if (num>num1)
        printf("El numero mayor es %d\n",num);
    else if (num<num1)
        printf("El numero mayor es %d\n",num1);
    else
        printf("Los numeros son iguales!");
    suma= num + num1;
    media= suma/2;
    printf("La media es : %.2lf",media);



    return ;
}
