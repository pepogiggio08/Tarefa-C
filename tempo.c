/**
2. Conversão de tempo
Desenvolva um programa que receba uma quantidade inteira de segundos e converta esse valor para:

horas;
minutos;
segundos restantes.
*/

#include <stdio.h>

int main()
{
		int seg, min, h, quebrado_min, quebrado_h;
		printf("insira o valor dos segundos: \n");
		scanf("%d", &seg);
		min = seg / 60;
		quebrado_min = seg%60;
		h = min / 60;
		quebrado_h = min%60;
		
		printf("%dh e %d min e %d seg se passaram", h, quebrado_h, quebrado_min);
		
}

