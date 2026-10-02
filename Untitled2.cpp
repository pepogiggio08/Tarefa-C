#include <stdio.h>
int main(){
	int matriz [3][3], i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Digite o valor[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d\t", matriz[i][j]);	
		}
		printf("\n");
}
}



