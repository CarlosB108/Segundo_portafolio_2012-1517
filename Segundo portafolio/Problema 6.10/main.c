#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,num1;
    int residuo, MCD;
    printf("Digite el valor del primer numero\n");
    scanf("%d",&num);
    printf("Digite el valor del segundo numero\n");
    scanf("%d",&num1);
    do
    {
     residuo = num % num1;
    if(residuo != 0)
    {
        num = num1;
        num1= residuo;
    }
    else
    {
        MCD = num1;
    }
    }
    while(residuo !=0);

    printf("MCD es: %d\n",MCD);
    return 0;
}
