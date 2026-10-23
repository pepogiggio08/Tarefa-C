#include <stdio.h>

float calcularMedia(float n1, float n2);

int main(){
	float a, b, resultado;
	printf("Digite primeiro valor: ");
	scanf("%f", &a);
	printf("Digite segundo valor: ");
	scanf("%f", &b);
	resultado = calcularMedia(a, b);
	printf("Media = %.2f\n", resultado);
	return 0;
}

float calcularMedia(float n1, float n2){
	return(n1 + n2) / 2;
}
