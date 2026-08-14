#include <stdio.h>

int main() {
    
    float distancia, vel_media, consumo, preco_combustivel, pedagio;
    float tempo_total_horas, litros_combustivel, custo_combustivel, custo_total, custo_por_km;
    
    int horas, minutos;

    
    printf("Digite a distância da viagem (km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade média prevista (km/h): ");
    scanf("%f", &vel_media);

    printf("Digite o consumo médio do veículo (km/L): ");
    scanf("%f", &consumo);

    printf("Digite o preço do litro do combustível (R$): ");
    scanf("%f", &preco_combustivel);

    printf("Digite o valor total de pedágios (R$): ");
    scanf("%f", &pedagio);

   
    tempo_total_horas = distancia / vel_media;
    litros_combustivel = distancia / consumo;
    custo_combustivel = litros_combustivel * preco_combustivel;
    custo_total = custo_combustivel + pedagio;
    custo_por_km = custo_total / distancia;

    
    horas = (int) tempo_total_horas;
    minutos = (int) ((tempo_total_horas - horas) * 60);

    
    printf("\n=== RESUMO DA VIAGEM ===\n");
    printf("Tempo estimado: %.2f horas (%dh %dmin)\n", tempo_total_horas, horas, minutos);
    printf("Combustível necessário: %.2f litros\n", litros_combustivel);
    printf("Custo com combustível: R$ %.2f\n", custo_combustivel);
    printf("Custo total da viagem: R$ %.2f\n", custo_total);
    printf("Custo por quilômetro: R$ %.2f/km\n", custo_por_km);

    return 0;
}