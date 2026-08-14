/**
10. Cálculo de uma viagem
Uma pessoa deseja estimar os custos de uma viagem de carro. Desenvolva um programa que receba:

distância da viagem em quilômetros;
velocidade média prevista em km/h;
consumo médio do veículo em km/L;
preço do litro do combustível;
valor total previsto de pedágios.
O programa deverá calcular e apresentar:

tempo estimado da viagem em horas;
quantidade de combustível necessária;
custo estimado com combustível;
custo total da viagem;
custo da viagem por quilômetro.
*/

#include<stdio.h>

int main()
{
	float d, velM, consM, pL, pdg, a;
	
	printf("Insira o valor da distância total percorrida:\n");
	scanf("%f", &d);
	
	printf("Insira o valor da velocidade média do véculo em Km/h:\n");
	scanf("%f", &velM);
	
	printf("\nInsira o valor do consumo médio do veículo em Km/L:\n");
	scanf("%f", &consM);
	
	printf("\nInsira o valor do preco do combustivel por Litro:\n");
	scanf("%f", &pL);
	
	printf("\nInsira o valor gasto total em pedágios:\n");
	scanf("%f", &pdg);
	
	a = d/velM;
	printf("O tempo estimado da viagem em horas é de: %.2f", a);
	
	a = d/consM;
	printf("A quantidade necessária de combustível é de: %.2f", a);
	
	a = (d/consM)*pL;
	printf("O gasto com o combustível é de R$: %.2f", a);
	
	a = (d/consM)*pL + pdg;
	printf("O custo total da viagem é de R$: %.2f", a);
	
	a = ((d/consM)*pL + pdg)/d;
	printf("O gasto médio da viagem por Km é de R$: %.2f", a);
}

