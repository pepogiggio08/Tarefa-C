#include <stdio.h>
int maior(int n1, int n2){
	if (n1 > n2){
		return n1;
	}else{
		return n2;
	};
}
int main(){
	int resultado = 0;
	int numero1, numero2;
	printf("Digite um n inteiro: ");
	scanf("%d", &numero1);
	printf("Digite outro n inteiro: ");
	scanf("%d", &numero2);
	resultado = maior(numero1, numero2);
	printf("O maior numero entre esses e: %d", resultado);
}
