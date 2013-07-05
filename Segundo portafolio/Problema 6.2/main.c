#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi,x,y,z,i,j,n,m;
    printf("Este programa te permite utilizar tu propios numeros para buscar el pi con esta formula (pi= x*(y/z)*(i/j)*(n/j)*(n/m)\n");
    printf("Digite el valor de x\n");
    scanf("%f",&x);
    printf("Digite el valor de y:\n");
    scanf("%f",&y);
    printf("Digite el valor de z:\n");
    scanf("%f",&z);
    printf("Digite el valor de i:\n");
    scanf("%f",&i);
    printf("Digite el valor de j:\n");
    scanf("%f",&j);
    printf("Digite el valor de n:\n");
    scanf("%f",&n);
    printf("Digite el valor de m:\n");
    scanf("%f",&m);

    pi= x*(y/z)*(i/j)*(n/j)*(n/m);
    printf("pi es = %f",pi);
    return 0;
}
