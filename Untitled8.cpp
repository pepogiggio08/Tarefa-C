#include <stdio.h>
int main(){
	
	int matriz[4][4], i, j, SomaDiag = 0, SomaDiagInv = 0;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			printf("Digite o valor[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n");
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
			if ( i == j){
				printf("%d e um elemento da diagonal pricipal\n", matriz[i][j]);
				SomaDiag += matriz[i][j];
			}
		}
	}
	printf("\n");
	for (i = 0; i < 4; i++){
		for (j = 4; j >= 0; j--){
			if (i + j == 3){
				printf("%d e um elemento da diagonal inversa\n", matriz[i][j]);
				SomaDiagInv += matriz[i][j];
			}
		}
	}
		printf("\nO valor da soma dos elementos da diagonal principal e: %d\n", SomaDiag);
		printf("O valor da soma dos elementos da diagonal inversa e: %d", SomaDiagInv);
		
	}

