#include <stdio.h>
#include <string.h>

int convertirRomano(char);

int main()
{
    char romano[7];
    int letra,letra1,i;
    int result=0;
    printf("Este programa convierte de numero romano a numero arabigo.\n");
    printf("Digite un numero romano en mayusculas: ");
    scanf("%s",&romano);

    for(i=0;i<strlen(romano);i++)
    {


        letra=convertirRomano(romano[i]);
        letra1=convertirRomano(romano[i+1]);

        if(letra<letra1)
        {
            result-=letra;
        }
        else {
            result+=letra;
        }
    }

    printf("El numero romano convertido a numero arabigo es = %d",result);
}

int convertirRomano(char romano)//convierte un caracter romano en su valor numerico
{
    switch(romano)
    {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return  50;
            break;

        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default: return-1;

    }
}
