#include <stdio.h>
int main(){
	int matriz [4][3], i, j;
	float soma = 0, media = 0;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			printf("Digite o valor[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			soma += matriz[i][j];
		}
	}
	printf("A soma e igual a: %.2f", soma);
	media = soma / 12.0;
	printf("\nA media e igual a: %.2f", media);
}
