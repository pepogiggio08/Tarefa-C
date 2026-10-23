#include <stdio.h>
float media(float n1, float n2, float n3){
		return (n1+n2+n3)/3;
	};
int main(){
	float resultado = 0.0;
	float n1 = 0.0, n2 = 0.0, n3 = 0.0;
	printf("Digite a nota1: ");
	scanf("%f", &n1);
	printf("Digite a nota2: ");
	scanf("%f", &n2);
	printf("Digite o nota3: ");
	scanf("%f", &n3);
	resultado = media(n1, n2, n3);
	printf("\nA media das 3 notas n e: %.2f", resultado);
	if(resultado >= 6.0){
		printf("\nCom essa media, o aluno esta aprovado!");
	}else{
		printf("\nCom essa media, o aluno esta reprovado!");
	}
	return 0;
}
