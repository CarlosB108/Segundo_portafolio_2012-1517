#include <stdio.h>
#include <stdlib.h>

int main()
{
   int z=0,x,y=8;
   printf("Este programa visualiza un dibujo.\n\n");

    for(x=1;x<=9;x+=2){
        for(z=y; z>0; z--)
            putchar(' ');
        y-=2;
        for(z=x; z>0; z--){
            putchar('*');
            putchar(' ');}
        printf("\n");
    }
    y=2;
    for(x=7;x>=1;x-=2){
        for(z=y; z>0; z--)
            putchar(' ');
        y+=2;
        for(z=x; z>0; z--){
            putchar('*');
            putchar(' ');}
        printf("\n");
    }
    return 0;
}
