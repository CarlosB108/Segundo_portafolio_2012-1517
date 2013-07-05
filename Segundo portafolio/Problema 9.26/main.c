#include<stdio.h>
#include <string.h>
int main()
{
    int i;
    char linea[100];
    printf("Este programa lo que hace es al digitar una frase por el usuario visualizarla en lineas diferentes y consecutivas.\n");
    printf("Digite la frase:\n");
    gets(linea);
    for(i=0;i<strlen(linea);i++)
    {
        if(linea[i]==' ')
            linea[i]='\n';
    }
    printf("%s",linea);
    return 0;
}
