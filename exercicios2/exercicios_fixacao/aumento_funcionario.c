// Uma empresa decidiu dar um aumento escalonado a seus funcionários de acordo com a seguinte
// regra: 20% para os salários inferiores ou iguais a R$ 200,00; 10% para os salários situados entre R$
// 200,0 e R$ 500,00 (inclusive); 5 % para os salários entre R$ 500,00 e R$ 1000,00 (inclusive) e 1%
// para os demais salários. Escreva um programa que receba o salário atual de um funcionário e
// forneça o valor do seu novo salário
// Tiago Brandao
// 19/03/2026
#include <stdio.h>
int main()
{
    double salario, salarionovo;
    printf("Digite o salario a receber o aumento: ");
    scanf("%lf", &salario);
    if (salario <= 200 && salario > 0)
    {
        salarionovo = salario * 1.2;
        printf("O salario com o aumento será R$%.2lf\n", salarionovo);
    }
    else
    {
        if (salario > 200 && salario <= 500)
        {
            salarionovo = salario * 1.1;
            printf("O salario com aumento será R$%.2lf\n", salarionovo);
        }
        if (salario > 500 && salario <= 1000)
        {
            salarionovo = salario * 1.05;
            printf("O salario com aumento será R$%.2lf\n", salarionovo);
        }
        if (salario > 1000)
        {
           salarionovo = salario * 1.01;
        printf("O salario com aumento será R$%.2lf\n", salarionovo);
        }
        else
        {
            printf("Digite um salario valido!\n");
        }
    }
    return 0;
}