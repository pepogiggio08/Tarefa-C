#include <stdio.h>
int tabuada(int n1){
	for (int i = 1; i < 11; i++){
		printf("\n%d", i*n1);
	}
}
int main(){
	int numero = 0;
	int resultado = 0;
	printf("Digite um n inteiro: ");
	scanf("%d", &numero);
	printf("\nA tabuada desse n e: \n");
	resultado = tabuada(numero);
}
