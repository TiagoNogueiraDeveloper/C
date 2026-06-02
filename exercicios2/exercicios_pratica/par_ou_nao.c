// Par ou não
// Programa destinado a ler um número dado pelo usuário e decifrar se ele é par ou impar
// Tiago Brandão Nogueira
// 18/03/2026
#include <stdio.h>
int main()
{
    // Declaração de variável
    int numero;
    // Exibição
    printf("Digite o número a ser testado para identificar se é par ou não: ");
    // Recebendo informações
    scanf("%i", &numero);
    // Estrutura condicional
    if ((numero % 2) == 0)
    { // Se o resto do número for 0 então:
        printf("O número %i é par! \n", numero);
    }
    else
    { // Se não:
        printf("O número %i é impar!\n", numero);
    }
    return 0;
}