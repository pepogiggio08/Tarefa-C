/**
1. Consumo médio de combustível
Desenvolva um programa que receba:

a distância total percorrida, em quilômetros;
a quantidade de combustível consumida, em litros;
o preço do litro do combustível.
O programa deverá calcular e exibir:

o consumo médio do veículo em km/L;
o custo total da viagem;
o custo médio por quilômetro percorrido.
*/

int main()
{
	float d, c, p, a;
	printf("Insira o valor da distância total percorrida:\n");
	scanf("%f", &d);
	printf("\nInsira o valor da quantia de combustível consumida:\n");
	scanf("%f", &c);
	printf("\nInsira o valor do preco do combustivel:\n");
	scanf("%f", &p);
	
	a = d / c;
	printf("\n\nO valor do consumo medio do veiculo em km/L e: %.2f\n", a);
	a = c * p;
	printf("O valor do custo total da viagem e: %.2f\n", a);
	a = d / p;
	printf("O custo medio por Km percorrido e: %2.f\n", a);
}

