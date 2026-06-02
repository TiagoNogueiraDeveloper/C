// Fatorial: Escreva um programa que calcule o fatorial de um número n fornecido pelo
// usuário. Lembre-se: n! = n x (n-1) x (n-2) x ... x 1
// Tiago Brandão
// 25/03/2026
#include <stdio.h>
int main()
{
    int num, i;
    int fatorial;
    fatorial = 1;
    printf("Digite o número: ");
    scanf("%i", &num);
    for (i = num; i >= 1; i--)
    {
        fatorial = fatorial * i;
    }
    printf("O valor de %i fatorial é: %i \n", num, fatorial);
    return 0;
}