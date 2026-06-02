// Calcule a média de um aluno na disciplina de ARQIPCO. Para isso solicite as notas das
// avaliações e seus respectivos pesos. Mostre a média como resultado e caso ela seja maior ou igual
// a 6.0, informe que o aluno foi aprovado. Observação: para esse exercício não considere a
// frequência.
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int nota_ea, peso_ea, nota_p1, peso_p1, nota_p2, peso_p2, mediafinal;
    printf("Insira a nota do exercício avaliativo (0-10): ");
    scanf("%i", &nota_ea);
    printf("Insira o peso do exercício avaliativo (0-10): ");
    scanf("%i", &peso_ea);
    printf("Insira a nota da avaliação teórica ou prática (0-10): ");
    scanf("%i", &nota_p1);
    printf("Insira o peso da avaliação teórica ou prática (0-10): ");
    scanf("%i", &peso_p1);
    printf("Insira a nota do projeto (0-10): ");
    scanf("%i", &nota_p2);
    printf("Insira o peso do projeto (0-10): ");
    scanf("%i", &peso_p2);
    mediafinal = (nota_ea * peso_ea + nota_p1 * peso_p1 + nota_p2 * peso_p2) / 10;
    if (mediafinal >= 6)
    {
        printf("\nO aluno obteve média de %i e foi aprovado!\n", mediafinal);
    }
    else
    {
        if (mediafinal >= 4 && mediafinal <= 6)
        {
        printf("\nO aluno obteve média de %i e teŕa de fazer IFA!\n", mediafinal);            
        }
        else
        {
        printf("\nO aluno obteve média de %i e foi reprovado!\n", mediafinal);            
        }
    }
}