// Apenas os Ímpares: Faça um programa que imprima todos os números ímpares entre
// 1 e 10.
// Tiago Brandão
// 25/03/2026
#include <stdio.h>
int main()
{
    int num_impares;
    printf("Números ímpares de 1-10 \n");
    for (num_impares = 1; num_impares <= 10; num_impares += 2)
    {
        printf("%i \n", num_impares);
    }
}