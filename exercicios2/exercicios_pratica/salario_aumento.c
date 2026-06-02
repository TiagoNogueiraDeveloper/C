// Leia o salário de um funcionário e calcule o novo salário:
// • Até 1000 → aumento de 20%
// • De 1001 a 3000 → aumento de 15%
// • Acima de 3000 → aumento de 10%
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    double salario, salarionovo;
    printf("Digite o salaŕio a receber o aumento: ");
    scanf("%lf", &salario);
    if (salario <= 1000 && salario > 0)
    {
        salarionovo = salario * 1.2;
        printf("O salário com o aumento será R$%.2lf\n", salarionovo);
    }
    else
    {
        if (salario > 1000 && salario <= 3000)
        {
            salarionovo = salario * 1.15;
            printf("O salaŕio com aumento será R$%.2lf\n", salarionovo);
        }
        else
        {
            salarionovo = salario * 1.1;
            printf("O salário com aumento será R$%.2lf\n", salarionovo);
        }
    }
    return 0;
}