// Exercício 3. Uma companhia de carros paga a seus vendedores um salário de R$ 2000,00
// por mês, mais uma comissão de R$ 500,00 para cada carro vendido. Caso o vendedor seja
// gerente, ele ainda receberá um bônus de 1% sobre as vendas. Faça um programa para
// calcular e exibir o salário do vendedor num dado mês, recebendo como dados de entrada o
// CPF do vendedor, o número de carros vendidos e caso seja gerente, o valor total das
// vendas e valor de seu bônus.
// Tiago Brandao
// 20/03/2026
#include <stdio.h>
int main()
{
    // Declaracao Variaveis
    double valor_total_vendas, valor_total_bonus;
    int gerente, cpf, carros_vendidos;
    // Captura de dados
    printf("Digite o cpf do funcionario: ");
    scanf("%i", &cpf);
    printf("Digite 0 para gerente e 1 para funcionario: ");
    scanf("%i", &gerente);
    printf("Digite a quantidade de carros vendidos por este funcionario: ");
    scanf("%i", &carros_vendidos);
    // Logica e calculos
    valor_total_vendas = (carros_vendidos * 500) + 2000; // Valor total arrecadado com as vendas + salario
    valor_total_bonus = valor_total_vendas / 100; // Valor do bonus para gerentes
    // Se gerente informa o valor do bonus
    if (gerente == 0)
    {
        printf("Valor total das vendas: R$%.2lf", valor_total_vendas);
        printf("\nValor total do bonus: R$%.2lf", valor_total_bonus);
    }
    else
    {
        printf("Valor total das vendas: R$%.2lf", valor_total_vendas);
    }
    return 0;
}