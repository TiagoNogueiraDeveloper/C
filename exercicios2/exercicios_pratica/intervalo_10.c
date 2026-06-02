// Leia um número e informe se ele está entre 10 e 20
// (inclusive). Caso contrário, informe “Fora do intervalo".
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%i",&num);
    if (num >= 10 && num <= 20)
    {
        printf("O seu número está dentro do intervalo 10-20!\n");
    }
    else
    {
        printf("O seu número está fora do intervalo 10-20!\n");
    }
    return 0;
}