#include <stdio.h>
int main(){
	int matriz[4][3], i, j, soma = 0, pares = 0, maior;
	int linhaMaior = 0, colunaMaior = 0;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			printf("Digite o valor[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			printf("%d\t", matriz[i][j]);	
		}
		printf("\n");
	}
}


