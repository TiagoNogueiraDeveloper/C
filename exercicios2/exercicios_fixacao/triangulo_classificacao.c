// Escreva um programa para classificar um triângulo de lados de comprimentos dados em escaleno
// (os três lados de comprimentos diferentes), isósceles (dois lados de comprimentos iguais) ou
// equilátero (os três lados de comprimentos iguais).
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int valor1, valor2, valor3;
    printf("Digite o valor do primeiro lado: ");
    scanf("%i", &valor1);
    printf("Digite o valor do segundo lado: ");
    scanf("%i", &valor2);
    printf("Digite o valor do terceiro lado: ");
    scanf("%i", &valor3);
    if (valor1 == valor2 && valor1 == valor3)
    {
        printf("É um triângulo equilátero!\n");
    }
    else
    {
        if (valor1 != valor2 && valor2 != valor3)
        {
            printf("É um triângulo escaleno!\n");
        }
        else
        {
            printf("É um triângulo isósceles!\n");
        }
    }
    return 0;
}