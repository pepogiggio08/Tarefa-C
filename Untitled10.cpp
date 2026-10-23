#include <stdio.h>
int positivo(int n){
	if (n >= 0){
		return 1;
	}else{
		return 0;
	};
}
int main(){
	int resultado = 0;
	int numero = 0;
	printf("Digite um n inteiro: ");
	scanf("%d", &numero);
	resultado = positivo(numero);
	printf("%d", resultado);
	
	return 0;
}
