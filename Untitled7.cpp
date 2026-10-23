#include <stdio.h>
int dobro(int n1){
	return n1*2;
}
int main(){
	int resultado = 0;
	int numero;
	printf("Digite um n inteiro: ");
	scanf("%d", &numero);
	resultado = dobro(numero);
	printf("O dobro desse n e: %d", resultado);
}
