// Leia um número de 1 a 7 e mostre o dia da semana
// correspondente. Caso o usuário digite um número fora desse
// intervalo, exiba “Dia inválido”.
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int dia;
    printf("Digite um número de 1 a 7: ");
    scanf("%i", &dia);
    if (dia == 1)
    {
        printf("Seu dia é domingo!\n");
    }
    if (dia == 2)
    {
        printf("Seu dia é segunda!\n");
    }
    if (dia == 3)
    {
        printf("Seu dia é terça!\n");
    }
    if (dia == 4)
    {
        printf("Seu dia é quarta!\n");
    }
    if (dia == 5)
    {
        printf("Seu dia é quinta\n");
    }
    if (dia == 6)
    {
        printf("Seu dia é sexta!\n");
    }
    if (dia == 7)
    {
        printf("Seu dia é sábado!\n");
    }
    else
    {
        printf("Dia inválido!\n");
    }
    return 0;
}