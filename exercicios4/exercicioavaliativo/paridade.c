// Verificador de Paridade: Escreva uma função que receba um número inteiro e retorne 1 se o
// número for par e 0 se for ímpar.
// 10/04/2026
// Tiago Brandão
#include <stdio.h>

int paridade(int par);

int main()
{
    int num;
    printf("Digite o valor do número a classificado: ");
    scanf("%i", &num);
    printf("O seu número é (0 - impar), (1 - par): %i\n", paridade(num));
}

int paridade(int par)
{
    if ((par % 2) == 0)
    {
        return (1);
    }
    else
    {
        return(0);
    }
}