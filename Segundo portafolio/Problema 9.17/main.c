#include <stdio.h>
#include <string.h>
int main()
{
    char cadena[1000];
    int i,j,k;
    printf("Este programa lee una frase.\n");
    printf("Digite la frase que desee:\n");
    gets(cadena);

    for(i=0;i<strlen(cadena);i++)
    {
        if((cadena[i]==' ' && cadena[i-1]==' ')||(cadena[i]==' ' && cadena[i+1]==' ') )
            for(j=i;j<strlen(cadena);j++)
        {
            cadena[j]=cadena[j+1];


        }

    }
   for(i=0;i<strlen(cadena);i++)
    printf("%c" , cadena[i]);
    return 0;
}
