#include <stdio.h>
int main()
{
	int matriz[5][3], i, j, alunoMaior = 0, qtd = 0;
	float somarFila = 0, somarColuna = 0, maior = 0;
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 3; j++){
			printf("Digite o valor da nota [%d] do aluno [%d]: ", j+1, i+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n");
	printf("\n===Essa-e-a-matriz===\n\n");
	printf("\t\tNota1 Nota2 Nota3\n\n");
	
	for (i = 0; i < 5; i++){
		printf("Aluno %d\t\t", i+1);
		for (j = 0; j < 3; j++){
			printf("%d\t", matriz[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	
	
	for (i = 0; i < 5; i++){
		somarFila = 0; 
		for (j = 0; j < 3; j++){
			somarFila += matriz[i][j];
		}
		if (somarFila/3.0 > maior){
			maior = somarFila/3.0;
			alunoMaior = i+1;
		}
		if (somarFila/3.0 > 6.0){
			qtd++;
		}
		printf("O valor da media do aluno %d e: %.2f\n", i + 1, somarFila/3.0);
	}
	printf("\nO n de alunos que teve uma media acima de 6 foi: %d", qtd);
	printf("\nO valor da maior media e de: %.2f\nE pertence ao aluno: %d",maior, alunoMaior);

}
