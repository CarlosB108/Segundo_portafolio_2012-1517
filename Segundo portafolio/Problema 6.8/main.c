#include <stdio.h>
#include <math.h>
int factorial(int);
int main()
{
    int n,i;
    float e=0;
    printf("Digite un numero\n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {

        e+=pow(n,i)/(factorial(i));
    }
    printf ("El valor de e es %f",e);
}

int factorial(int n)
{
    int i,factorial=1;
    if(n==0||n==1)
    {
        return 1;
    }
    for(i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}

