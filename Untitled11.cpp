/*
Desenvolva um programa que cadastre 5 alunos.

Para cada aluno, armazene em vetores:

nome;
idade;
nota final.
Ao final, apresente os dados de todos os alunos no formato:

Aluno: Carlos

Idade: 20

Nota: 8.50
*/
#include <stdio.h>
int main()
{
	char nomes [5][30];
	int i, idades [5];
	float notas [5];
	for (i = 0; i < 5; i++)
	{
		printf("\nCadastro do aluno %d\n", i + 1);
		printf("Informe o nome do aluno: ");
		scanf("%s", nomes[i]);
		printf("Informe a idade do aluno: ");
		scanf("%d", &idades[i]);
		printf("Informe a nota final do aluno: ");
		scanf("%f", &notas[i]);
	}
	
	printf("\n=========Secao de Dados===========\n");
	
	for (i = 0; i < 5; i++)
	{
		printf("\nO nome do aluno %d e: %s", i + 1, nomes[i]);
		printf("\nA idade do aluno e: %d", idades[i]);
		printf("\nA nota final do aluno e: %.2f \n\n", notas[i]);
	}
	
	return 0;
}
