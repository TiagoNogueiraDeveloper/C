// Exercício 2. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
// porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Faça um
// algoritmo para ler o custo de fábrica do carro, a porcentagem do distribuidor, a porcentagem
// dos impostos e exiba o custo ao consumidor. Caso o custo ao consumidor seja menor que
// R$100,000.00, conceda um desconto de $1,000.00.
// Tiago Brandao
// 20/03/2026
#include <stdio.h>
int main ()
{
    // Declaracao variaveis
    double porcentagem_distribuidor, porcentagem_impostos, custo_final, valor_com_desconto;
    int porcentagem_distribuidor_scan, porcentagem_impostos_scan, custo_fabrica;
    // Captura de dados
    printf("\nInsira o custo de fabrica do carro: ");
    scanf("%i", &custo_fabrica);
    printf("\nInsira a porcentagem do distribuidor (0-100): ");
    scanf("%i", &porcentagem_distribuidor_scan);
    printf("\nInsira a porcentagem de impostos (0-100): ");
    scanf("%i", &porcentagem_impostos_scan);
    // Logica e operacoes
    porcentagem_distribuidor = (custo_fabrica * porcentagem_distribuidor_scan) / 100; // Calculo do valor que pertence ao distribuidor
    porcentagem_impostos = (custo_fabrica * porcentagem_impostos_scan) / 100; // Calculo do valor que vai para os impostos
    custo_final = custo_fabrica + porcentagem_distribuidor + porcentagem_impostos; // Calculo do custo ao consumidor
    // Aplicacao do desconto
    if (custo_final < 100000)
    {
        valor_com_desconto = custo_final - 1000;
        printf("O seu custo final foi de R$%.2lf", valor_com_desconto);
    }
    else
    {
        printf("O seu custo final foi de R$%.2lf", custo_final);
    }
    return 0;
}