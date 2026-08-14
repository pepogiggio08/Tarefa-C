/**
8. Média ponderada

Um estudante realizou quatro avaliações. Cada avaliação possui um peso diferente.

Desenvolva um programa que receba:

    as quatro notas;
    os quatro pesos correspondentes.

Calcule a média ponderada.
*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, p1, p2, p3, p4, med;

    printf("Insira a nota 1: ");
    scanf("%f", &n1);

    printf("Insira a nota 2: ");
    scanf("%f", &n2);

    printf("Insira a nota 3: ");
    scanf("%f", &n3);

    printf("Insira a nota 4: ");
    scanf("%f", &n4);

    printf("Insira o valor do peso 1: ");
    scanf("%f", &p1);

    printf("Insira o valor do peso 2: ");
    scanf("%f", &p2);

    printf("Insira o valor do peso 3: ");
    scanf("%f", &p3);

    printf("Insira o valor do peso 4: ");
    scanf("%f", &p4);

    med = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4) / (p1 + p2 + p3 + p4);
    printf("O valor da média ponderada é: %f", med);
}
