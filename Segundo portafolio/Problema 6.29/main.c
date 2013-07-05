#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,i2,i3,z,primerDigito=0,segundoDigito=0,tercerDigito=0,cantidad=0;
    printf("Los numeros de tres digitos cuyas sumatorias del cubo de sus digitos son ellos mismos son: \n");
    for(i=100;i<999;i++)
    {
        if(i%100==0)
            continue;
        for(z=100; z<=1000;z=z+100)
        {
            if(z/i>0)
            break;
            primerDigito++;
        }

        i2=i-(primerDigito*100);
        for(z=10;z<=100;z=z+10)
        {
            if(z/i2>0)
                break;
            segundoDigito++;
        }

        i3=i2-(10*segundoDigito);
        for(z=1;z<=10;z++)
        {
            if(z/i3>0)
                break;
            tercerDigito++;
        }

        if(pow(primerDigito,3)+pow(segundoDigito,3)+pow(tercerDigito,3)==i-1)
        {
            printf("%d\n",i-1);
            cantidad++;
        }


            primerDigito=0;
            segundoDigito=0;
            tercerDigito=0;
    }
    printf(" La cantidad es: %d ",cantidad);
}
