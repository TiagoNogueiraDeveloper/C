// Exercício 2. Verificador de Sinal: Faça uma função que receba um número inteiro e retorne:
// • 1 se o número for positivo;
// • -1 se for negativo;
// • 0 se for zero.
// 10/04/2026
// Tiago Brandão
#include <stdio.h>
int NegativoZeroPositivo(int numero);

int main()
{
    int num;
    printf("Digite o valor do número para ser identificado: ");
    scanf("%i", &num);
    printf("(-1 para negativo), (0 para zero), (1 para positivo): %i\n", NegativoZeroPositivo(num));
}
int NegativoZeroPositivo(int numero)
{
    if (numero > 0)
    {
        return (1);
    }
    else
    {
        if (numero < 0)
        {
            return (-1);
        }
        else
        {
            return (0);
        }
    }
}
