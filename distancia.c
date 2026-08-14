/**
5. Distância entre dois pontos

Desenvolva um programa que receba x1, y1, x2 e y2 e calcule a distância entre os dois pontos.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, dist;

    printf("insira o valor de x1: ");
    scanf("%f", &x1);

     printf("insira o valor de x2: ");
    scanf("%f", &x2);

     printf("insira o valor de y1: ");
    scanf("%f", &y1);

     printf("insira o valor de y2: ");
    scanf("%f", &y2);

    dist = ((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    dist = sqrt(dist);
    printf("O valor da distancia entre os dois pontos é de: %.2f", dist);
}
