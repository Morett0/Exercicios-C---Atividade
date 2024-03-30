#include <stdio.h>
#include <stdlib.h>

int main () {
    float a, p, g;
    
    printf("Esse código calculará seu peso ideal com base na sua altura e sexo.\n\n");
    
    printf("Você é homem(1) ou mulher(2)?: ");
    scanf("%f", &g);

    if (g == 1)
    {
        printf("Qual sua altura em metros?: ");
        scanf("%f", &a);

        p = (72.7*a)-58;
        printf("Seu peso ideal é de %.2f", p); printf("Kg\n\n");
    } 
    else if (g == 2)
    {
        printf("Qual sua altura mulher em metros?: ");
        scanf("%f", &a);

        p = (61.1*a)-44.7;
        printf("Seu peso ideal é de %.2f", p); printf("Kg\n\n");
    }
    else
    {
        printf("Gênero invalido.\n\n");
    }
    return 0;
}