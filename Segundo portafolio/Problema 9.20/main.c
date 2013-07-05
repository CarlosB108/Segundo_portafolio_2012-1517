#include <stdio.h>
#include <string.h>
int main()
{
    int repeticiones[255];
    char linea[100];
    char masComun;
    int x,cantidad=0,mayor=0;
    for(x=0;x<255;x++)
    {
        repeticiones[x]=0;
    }
    printf("Digite un texto:\n");
    gets(linea);
    for(x=0;x<strlen(linea);x++)
    {
        repeticiones[linea[x]]++;
    }
    for(x=0;x<255;x++)
    {
        if(repeticiones[x]==0)
            continue;
            if(repeticiones[x]>mayor)
            {
                mayor=repeticiones[x];
                masComun=x;
            }

    }
    for(x=0;x<strlen(linea);x++)
    {
        char a;
        a=linea[x];
        if (a==97||a==101||a==105||a==111||a==117||a==65||a==69||a==73||a==79||a==85)
            linea[x]=masComun;
    }
    printf("%s",linea);
    return 0;
}
