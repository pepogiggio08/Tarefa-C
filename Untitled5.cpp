#include <stdio.h>
int main(){
	
	int matriz[3][4], i, j;
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("Digite o valor[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n===Essa-e-a-matriz===\n\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("%d\t", matriz[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	
	for (i = 0; i < 3; i++){
		int paresLinha = 0;
		for (j = 0; j < 4; j++){
			if (matriz[i][j] %2 == 0){
				paresLinha++;
			}
		}
		printf("O numero de pares na linha [%d] e: %d\n", i, paresLinha);
	}
}
