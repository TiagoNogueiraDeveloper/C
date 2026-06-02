// Programa leitura de número e classificação
// Tem como objetivo ler o número e classificá-lo
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    // Declaração de variável
    int numerousuario;
    printf("Indique o número a ser lido: ");
    // Captura de informação
    scanf("%i", &numerousuario);
    // Estrutura condicional
    if (numerousuario > 0) // Se o número maior que 0 exiba:
    {
        printf("O seu número é positivo!\n");
    }
    else // Ou então
    {
        if (numerousuario < 0) // Se o número menor que 0 exiba:
        {
            printf("O seu número é negativo!\n");
        }
        else // Se não exiba:
        {
            printf("O seu número é o zero!\n");
        }
    }
    return 0;
}