// Exercício 1. O Dobro de um Número: Escreva uma função chamada dobro que receba um número inteiro
// como parâmetro e retorne o dobro desse valor. No main, peça um número ao usuário e exiba o resultado da
// função.
// 10/04/2026
// Tiago Brandão
#include <stdio.h>

int dobronum(int v);

int main()
{
    int num;
    printf("Digite o valor do número a ser dobrado: ");
    scanf("%i", &num);
    printf("O seu dobro é: %i\n", dobronum(num));
}

int dobronum(int v)
{
    return (v+v);
}
