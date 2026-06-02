// Leia a nota de um aluno (0 a 10) e informe:
// • “Aprovado” (nota ≥ 6)
// • “IFA” (nota entre 4 e 6)
// • “Reprovado” (nota < 4)
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int nota;
    printf("Digite a nota do aluno: ");
    scanf("%i", &nota);
    if (nota >=  6)
    {
        printf("Aprovado!\n");
    }
    else
    {
        if (nota >= 4 && nota <= 6)
        {
            printf("IFA!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }
    }
    return 0;
}
