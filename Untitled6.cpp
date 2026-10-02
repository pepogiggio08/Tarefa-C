#include <stdio.h>
int main(){
	
int matriz [4][4], i, j, maior = 0, menor = 0, maiorI = 0, maiorJ = 0, menorI = 0, menorJ = 0;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			printf("Digite o valor[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n===Essa-e-a-matriz===\n\n");
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			printf("%d\t", matriz[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if(matriz[i][j] < menor){
				menor = matriz[i][j];
				menorI = i;
				menorJ = j;
			}	
		}
	}
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
				maiorI = i;
				maiorJ = j;
			}	
		}
}
		printf("O maior valor da matriz e: %d\nSua posicao e:[%d][%d]\n\n", maior, maiorI, maiorJ);
		printf("O menor valor da matriz e: %d\nSua posicao e:[%d][%d]", menor, menorI, menorJ);
}
