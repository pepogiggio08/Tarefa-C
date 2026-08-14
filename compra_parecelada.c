/**
7. Cálculo de uma compra parcelada

Uma loja permite que uma compra seja paga com uma entrada e o restante dividido em parcelas iguais.

Desenvolva um programa que receba:

    valor da compra;
    percentual da entrada;
    quantidade de parcelas.

Calcule e exiba:

    valor da entrada;
    valor restante após a entrada;
    valor de cada parcela.

Exemplo: para uma compra de R$ 2.000,00, entrada de 20% e 8 parcelas, o programa deverá calcular a entrada e dividir o saldo restante.
*/

#include <stdio.h>

int main()
{
    float valorC, percentE, qtdP, a;

    printf("Insira o valor da compra: ");
    scanf("%f", &valorC);

    printf("Insira o valor do percentual de entrada: ");
    scanf("%f", &percentE);
    percentE = percentE/100;

    printf("Insira a quantia de parcelas: ");
    scanf("%f", &qtdP);

    a = valorC * percentE;
    printf("O valor da entrada é de R$%.2f", a);

    a = valorC - (valorC * percentE);
    printf("O valor da compra após a entrada é de R$%.2f", a);

    a = (valorC - (valorC * percentE)) / qtdP;
    printf("O valor de cada parcela será de R$%.2f", a);

}
