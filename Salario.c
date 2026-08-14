/**
3. Cálculo do salário
Uma empresa deseja calcular o salário de um funcionário. O programa deverá receber:

quantidade de horas trabalhadas no mês;
valor recebido por hora;
percentual de desconto do INSS;
percentual de desconto do imposto de renda.
Calcule e exiba:

salário bruto;
valor do INSS;
valor do imposto de renda;
total de descontos;
salário líquido.
Considere que os percentuais serão informados pelo usuário.
*/
#include <stdio.h>

int main()
{
	int h;
	float salH, descontoINSS, descontoIMPO, a;
	
	printf("insira o n de horas:\n");
	scanf("%d", &h);
	printf("insira o valor recebido por hora:\n");
	scanf("%f", &salH);
	printf("insira o valor do desconto percentual do INSS:\n");
	scanf("%f", &descontoINSS);
	printf("insira o valor do desconto percentual do imposto de renda");
	scanf("%f", &descontoIMPO);
	
	descontoINSS = descontoINSS/100;
	descontoIMPO = descontoIMPO/100;
	
	a = h * salH;
	printf("\n\n O valor do salario bruto e: ", a);
	a = descontoINSS * (h * salH);
	printf("\n o valor destinado ao INSS e: ", a);
	a = descontoIMPO * (h * salH);
	printf("\n o valor destinado ao imposto de renda e: ", a);
	a = (descontoINSS * (h * salH)) + (descontoIMPO * (h * salH));
	printf("\n o valor total descontado e: ", a);
	a = (h * salH) - (descontoINSS * (h * salH)) - (descontoIMPO * (h * salH));
	printf("\n o valor do salario liquido e: ", a);
}

/**

