#include <stdio.h>

int main ()
{
    int i;
    char texto[50];

    for(i=0;i<50;i++)
    {
        texto[i]='0';
    }

    int contador = 0;
    printf("Este programa determina la cantidad de letras mayusculas en un texto dado por el usuario.\n");
    printf("Ingrese un texto: ");
    gets(texto);
    for(i=0;i<50;i++)
    {
       if(texto[i] >= 'A' && texto[i] <= 'Z')
            contador++;
    }
    printf("Mayusculas: %d",contador);
    return 0;
}
