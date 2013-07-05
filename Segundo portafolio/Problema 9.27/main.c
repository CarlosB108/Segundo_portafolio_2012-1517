#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int palindromo(char x[]);
int main()
{
    char arr[100],e;
    printf("Este programa determina si una frase o palabra es un pal%cndromo\n",161);
    printf("Digite una frase o palabra para saber si es palindromo:\n");
    gets(arr);

        if(palindromo(arr)== 1)
            printf("Es palindromo");
    else
        printf("No es palindromo ");
    return 0;
}
int palindromo(char s[])
{


    int centro=strlen(s)/2,inicio=0,fin=strlen(s)-1;
        for(;inicio<centro;inicio++,fin--)
            {
                if(s[inicio]!=s[fin])

    return 0;
            }
    return 1;
}
