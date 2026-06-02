// Escreva um programa que determine o número de dias de um mês de acordo com o mês e o ano
// informado pelo usuário.
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int mes, ano;
    printf("Insira o ano: ");
    scanf("%i", &ano);
    printf("Insira o mes: ");
    scanf("%i", &mes);
    if ((ano % 4) == 0 && mes == 2)
    {
        printf("Seu mes tem 29 dias!\n");
    }
    else
    {
        if ((ano % 4) != 0 && mes == 2)
        {
            printf("Seu mes tem 28 dias!\n");
        }
        else
        {
            if (mes == 1 || mes == 3 || mes == 8 || mes == 7 || mes == 10 || mes == 12)
            {
                printf("Seu mes tem 31 dias!\n");
            }
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                printf("Seu mes tem 28 dias!\n");
            }
            else
            {
                printf("Digite um mes/ano apropriado!");
            }
        }
    }
    return 0;
}