// Leia dois números e mostre:
// • O maior
// • O menor
// Tiago Brandão Nogueira
// 18/03/2026
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Digite um número: ");
    scanf("%i", &num1);
    printf("Digite outro número: ");
    scanf("%i", &num2);
    if (num1 > num2)
    {
        printf("O número %i é o maior!\n", num1);
    }
    else
    {
        printf("O número %i é o maior!\n", num2);
    }
    return 0;
}