#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,z;
    printf("Digite un valor para dibujar la figura.\n");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        for(z=1;z<=i;z++)
            printf("%d  ",z);
        printf("\n");
    }
    return 0;
}
