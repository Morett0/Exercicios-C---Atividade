#include <stdio.h>
#include <stdlib.h>

int main () {
    float x, y, z;
    printf("Esse código dirá se os três numeros que você der formam um triangulo\n\n");

    printf("Qual o primeiro número?: ");
    scanf("%f", &x);
    printf("Qual o segundo número?: ");
    scanf("%f", &y);
    printf("Qual o terceiro número?: ");
    scanf("%f", &z);

    if (x<y+z && y<x+z && z<x+y)
    {
        printf("\nx = %.1f", x);
        printf("\ny = %.1f", y);
        printf("\nz = %.1f", z);
        printf("\n\nEles formam um triangulo.\n\n");
    }
    else
    {
        printf("\nx = %.1f", x);
        printf("\ny = %.1f", y);
        printf("\nz = %.1f", z);
        printf("\nEles não formam um triangulo.\n\n");
    }
    return 0;
}