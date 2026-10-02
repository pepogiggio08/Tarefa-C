#include <stdio.h>
int main(){
	
	int matriz[3][3], i, j;
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Digite o valor[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n===Essa-e-a-matriz===\n\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d\t", matriz[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	
	for (i = 0; i < 3; i++){
		int somaLinha = 0;
		for (j = 0; j < 3; j++){
			somaLinha += matriz[i][j];	
		}
		printf("O valor a soma da linha [%d] e igual a: %d\n", i, somaLinha);
	}
	printf("\n");
	for (j = 0; j < 3; j++){
		int somaColuna = 0;
		for (i = 0; i < 3; i++){
			somaColuna += matriz[i][j];	
		}
		printf("O valor a soma da linha [%d] e igual a: %d\n", i, somaColuna);
	}
}
