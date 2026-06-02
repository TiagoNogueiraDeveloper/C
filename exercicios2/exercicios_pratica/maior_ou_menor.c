// Leia dois números inteiros e informe qual é o maior.
// Caso sejam iguais, informe “Números iguais”.
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Digite o primeiro numero da comparação: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero da comparação: ");
    scanf("%i", &num2);
    if (num1 == num2)
    {
        printf("Os número são iguais!\n");
    }
    else
    {
        if (num1 > num2)
        {
            printf("O primeiro número é maior que o segundo!\n");
        }
        else
        {
            printf("O segundo número é maior!\n");
        }
    }
    return 0;
}