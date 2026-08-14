/**
9. Troco em notas
Desenvolva um programa que receba um valor inteiro em reais e determine quantas notas serão necessárias para representar esse valor utilizando a menor quantidade possível de notas.

Considere notas de:

R$ 100;
R$ 50;
R$ 20;
R$ 10;
R$ 5;
R$ 2;
R$ 1.
Exemplo:

Para:

Valor: 387
O programa deverá apresentar:

3 nota(s) de R$ 100
1 nota(s) de R$ 50
1 nota(s) de R$ 20
1 nota(s) de R$ 10
1 nota(s) de R$ 5
1 nota(s) de R$ 2
O exercício deve ser resolvido sem estruturas condicionais ou de repetição, utilizando divisão inteira e o operador %.
*/
#include <stdio.h>

int main()
{
	int val, a, b, c, d, e, f, g;
	printf("Insira o valor em dinheiro: ");
	scanf("%d", &val);
	
	a = val/100;
	b = val%100/50;
	c = val%100%50/20;
	d = val%100%50%20/10;
	e = val%100%50%20%10/5;
	f = val%100%50%20%10%5/2;
	g = val%100%50%20%10%2%1;
	
	printf("Serão necessárias \n%d notas de R$ 100\n%d notas de R$50\n%d notas de R$20\n%d notas de R$10\n%d notas de R$5\n%d notas de R$2\n%d notas de R$1", a, b, c, d, e, f, g);
	
	return 0;
}
