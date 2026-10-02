#include <stdio.h>
int main(){
	int matriz [4][4], i, j;
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
				if (matriz[i][j] > 0){	
					printf("O numero da posicao [%d][%d] e positivo!\n", i, j);
				}
				else if (matriz[i][j] == 0){
					printf("O numero da posicao [%d][%d] e igual a 0!\n", i, j);
				}
				else if (matriz[i][j] < 0){
						printf("O numero da posicao [%d][%d] e negativo!\n", i, j);
				}
		}
	}
}
