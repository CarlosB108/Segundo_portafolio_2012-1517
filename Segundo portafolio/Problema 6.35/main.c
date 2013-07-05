#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,l,p,kg;
    char f;
    printf("Este programa convierte de centimetros a pulgadas y de libras a kilogramos.\n");
    do
    {
        printf("Digite el valor de centimetros:\n");
        scanf("%f", &l);

        p = l / 2.54;

        printf("Digite el valor de libras:\n");
        scanf("%f", &m);

        kg=m/2.2;

        printf("La conversi%cn es %.2f cm , %.2f pulg\n",162, l, p);
        printf("La conversi%Cn es %.2f lb , %.2f kg\n",162,m, kg);
        scanf("%c", &f);

        if (f=='f')
            break;


    } while (l!='f');

    return 0;
}
