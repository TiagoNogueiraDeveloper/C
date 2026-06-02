// Exercício 1. Calcule a média de quatro números dados. Exiba o valor da média e, para
// cada número exiba se ele está abaixo ou acima da média.
// Tiago Brandao Nogueira
// 20/03/2026
#include <stdio.h>

int main()
{
    // Declaracao variaveis
    int num1, num2, num3, num4;
    double media;
    // Captura de dados
    printf("Insira o valor do numero 1: ");
    scanf("%i", &num1);
    printf("\nInsira o valor do numero 2: ");
    scanf("%i", &num2);
    printf("\nInsira o valor do numero 3: ");
    scanf("%i", &num3);
    printf("\nInsira o valor do numero 4: ");
    scanf("%i", &num4);
    // Operacoes logicas
    media = (num1 + num2 + num3 + num4) / 4; // Calculo da media aritmetica
    printf("\nO valor da media de seus numeros: %2.lf\n", media); // Exibicao da media
    // Verificacao se cada numero esta acima ou abaixo da media
    if (num1 > media)
    {
        printf("O numero 1 esta acima da media!\n");
    }
    if (num1 < media)
    {
        printf("O numero 1 esta abaixo da media!\n");
    }
    if (num2 > media)
    {
        printf("O numero 2 esta acima da media!\n");
    }
    if (num2 < media)
    {
        printf("O numero 2 esta abaixo da media!\n");
    }    
    if (num3 > media)
    {
        printf("O numero 3 esta acima da media!\n");
    }
    if (num3 < media)
    {
        printf("O numero 3 esta abaixo da media!\n");
    }    
    if (num4 > media)
    {
        printf("O numero 4 esta acima da media!\n");
    }
    if (num4 < media)
    {
        printf("O numero 4 esta abaixo da media!\n");
    }
    return 0;
}