// Detector de Primos: Peça que o usuário digite um número e exiba uma mensagem
// dizendo se ele é um número primo ou não.
// Tiago Brandão
// 25/03/2026
#include <stdio.h>
int main()
{
    int num, i, contador;
    contador = 0;
    i = 1;
    printf("Digite um numero para passar no detector: ");
    scanf("%i", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            contador++;
        }
        i++;
    }
    if (contador == 2)
    {
        printf("Foi identificado como numero primo!");
    }
    else
    {
        printf("Foi identificado como numero nao-primo!");
    }
    return 0;
}