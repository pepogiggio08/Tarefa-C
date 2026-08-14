/**
4. Cálculo de uma conta de restaurante

Desenvolva um programa que receba:

    valor total dos alimentos consumidos;
    valor das bebidas;
    quantidade de pessoas na mesa;
    percentual da taxa de serviço.

O programa deverá calcular:

    valor do consumo;
    valor da taxa de serviço;
    valor total da conta;
    valor que cada pessoa deverá pagar.

Considere que a conta será dividida igualmente entre todas as pessoas.
*/
#include <stdio.h>
int main()
{
    float valor, valor_b, percent, a;
    int qtd;
    printf("Insira o valor total de alimentos consumidos: ");
    scanf("%f", &valor);
    printf("\n Insira o valor total das bebidas: ");
    scanf("%f", &valor_b);
    printf("\n Insira a quantia de pessoas na mesa: ");
    scanf("%d", &qtd);
    printf("\n Insira o percentual da taxa de serviço: ");
    scanf("%f", &percent);

    a = valor + valor_b;
    printf("O valor do consumo foi de R$%f", a);
    percent = percent/100;
    a = (valor + valor_b) * percent;
    printf("O valor da taxa de serviço foi de R$%f", a);
    a = valor + valor_b + ((valor + valor_b) * percent);
    printf("O valor total da despesa foi de R$%f", a);
    a = (valor + valor_b + ((valor + valor_b) * percent)) / qtd;
    printf("O valor que cada pessoa terá que pagar é de R$%f", a);
}