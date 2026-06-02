// Média de Notas: Crie um programa que leia as notas de uma turma de 5 alunos e, ao
// final, exiba a média aritmética da turma.
// Tiago Brandão
// 25/03/2026
#include <stdio.h>
int main()
{
    int nota, request, soma;
    soma = 0;
    for (request = 1; request <=5; request++)
        {
            printf("Digite a nota: ");
            scanf("%i", &nota);
            soma = soma + nota;
        }
    printf("A média é: %i \n", (soma / 5));
    return 0;
}