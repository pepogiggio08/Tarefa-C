#include <stdio.h>

int maior(int VetorArg[10]){
	int maiorN = VetorArg[0];
	for(int i = 0; i < 10; i++){
		if(VetorArg[i] > maiorN){
			maiorN = VetorArg[i];
		}
	}
	return maiorN;
}
int main(){
	int resultado = 0;
	int vetor[10] = {0};
	
	for (int i = 0; i < 10; i++){
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
			
	}
	
	resultado = maior(vetor);
	printf("O maior valor dos colocados e: %d", resultado);
}
