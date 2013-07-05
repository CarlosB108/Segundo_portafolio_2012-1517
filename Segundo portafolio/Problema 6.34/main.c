#include <stdio.h>
#include <math.h>

int main()
{
    float alt, vel, t, c, px, prod, p;
    const float g = 9.8;
    printf("Este programa lee la altura desde la que cae un objeto.\n");
    printf("Imprime la velocidad y la altura.\n");
    printf("Digite el valor de la altura en metros:\n");
    printf("(*Puede introducir decimales*)\n");
    scanf("%f", &alt);
    printf("\nDesde %.2f metro(s),\n", alt);

    prod = 2 * alt / g;
    t = sqrt(prod);

    printf("\nUn objeto toma %.1f segundo(s) para tocar el suelo.\n", t);

    for(c = 0; c <= t; c += .2)
    {
        vel = -1 * g * c;
        px = 0.5 * g * pow(c, 2);
        p = alt - px;
        printf("\nDespu%cs de %.1f segundo(s), est%c a %.2f metro(s) del suelo con una velocidad de\n %.2f m/s.\n", 130, c,  160, p, vel);
    }
    return 0;
}
