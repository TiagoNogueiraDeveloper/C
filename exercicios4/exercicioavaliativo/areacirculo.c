// Área do círculo: Faça uma função que calcule a área de um círculo (Área =  x raio2), recebendo
// o raio como parâmetro.
// 10/04/2026
// Tiago Brandão
#include <stdio.h>
const float pi = 3.14;
int AreaCirculo(int area);

int main()
{
    int raio;
    printf("Digite o valor do raio: ");
    scanf("%i", &raio);
    printf("A área do seu triângulo é: %i\n", AreaCirculo(raio));
}

int AreaCirculo(int raio)
{
    return ((raio*raio)*pi); // Cálculo da área
}