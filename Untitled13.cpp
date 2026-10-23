#include <stdio.h>

float valores(float VetorArg[8]){
	float soma = 0.0;
	float media = 0.0;
	for(int i = 0; i < 8; i++){
		soma += VetorArg[i];
	}
	media = soma/8;
	return media;
}
int main(){
	float resultado = 0.0;
	float notas[8] = {0.0};
	
	for (int i = 0; i < 8; i++){
		printf("Digite um valor: ");
		scanf("%f", &notas[i]);
			
	}
	
	resultado = valores(notas);
	printf("O maior valor dos colocados e: %.2f", resultado);
}
