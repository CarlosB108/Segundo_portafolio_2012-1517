#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1,nota2,nota3,nota4;
    printf("Lectura de la lista de calificaciones de un ex%cmen de Historia\n",160);
    printf("Digite la primera nota\n");
    scanf("%d",&nota1);
    printf("Digite la segunda nota\n");
    scanf("%d",&nota2);
    printf("Digite la tercera nota\n");
    scanf("%d",&nota3);
    printf("Digite la cuarta nota\n");
    scanf("%d",&nota4);
    printf("Las calificaciones de historia son %d,%d,%d,%d",nota1,nota2,nota3,nota4);

    return 0;
}
