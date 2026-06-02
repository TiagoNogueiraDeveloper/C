// Área do Retângulo: Escreva uma função que receba a base e a altura de um retângulo e retorne
// a sua área (Área = base x altura
// 10/04/2026
// Tiago Brandão

#include <stdio.h>

int arearetangulo(int base, int altura);

int main()
{
    int base, altura;
    printf("Digite o valor da base: ");
    scanf("%i", &base);
    printf("Digite o valor da altura: ");
    scanf("%i", &altura);
    printf("A área do seu triângulo é: %i\n", arearetangulo(base, altura));
}

int arearetangulo(int base, int altura)
{
    return (base*altura); // Cálculo da área
}