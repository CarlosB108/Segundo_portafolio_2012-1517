#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char palabra[20];
    char cadenas[10][20];
    printf("Digite la cantidad de palabras\n");
    scanf("%d",&n);
    printf("Digite las palabras\n");
    for(i=0;i<=n;i++)
    {
        gets(palabra);

        for(j=0;j<strlen(palabra);j++)
        {

            cadenas[i][j]=palabra[j];


        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<10;j++)
        {
            if (cadenas[i][j]=='\0')
                break;
        }
        printf("La palabra #%d tiene %d letras\n",i+1,j);
    }


    return 0;
}
