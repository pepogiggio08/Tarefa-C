/**
6. Conversão de temperatura

Desenvolva um programa que receba uma temperatura em graus Celsius e apresente o valor correspondente em:

    Fahrenheit;
    Kelvin.

O programa deverá exibir os resultados com duas casas decimais.
*/

#include <stdio.h>

int main()
{
    float Cels, faren, kel;
    printf("Insira o valor da temperatura em graus Celsius: ");
    scanf("%f", &Cels);

    faren = 1.8 * Cels + 32;
    kel = Cels + 273.15;
    printf("\n O valor dessa temperatura em Farenheit é: %.2f", faren);
    printf("\n O valor dessa temperatura em Kelvin é: %.2f", kel);

}