#include <stdio.h>

int main()
{
    int meses,i;
    int conejos=1,s1=0,s2=1;
    printf("Este programa imprime la cantidad de conejos que se reproducen en cierta cantidad de meses\n");
    printf("Digite la cantidad de meses:");
    scanf("%d",&meses);
    for(i=0;i<meses;i++)
    {
         conejos=s1+s2;
         s1=s2;
         s2=conejos;
    }
    printf("La cantidad de conejos que se producen en %d mese(s): %d conejos",meses,conejos);
    return 0;
}
