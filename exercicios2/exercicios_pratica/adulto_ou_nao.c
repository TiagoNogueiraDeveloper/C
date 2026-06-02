// Leia a idade de uma pessoa e informe:
// • “Menor de idade” (menos de 18 anos)
// • “Maior de idade” (18 anos ou mais)
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    if (idade >= 18) // Estrutura condicional
    { // Se maior que 18 anos, exiba:
        printf("Você é um adulto!\n");
    }
    else // Se não:
    {
        printf("Você ainda não tem que arcar com as grandes responsabilidades!\n");
    }
    return 0;
}