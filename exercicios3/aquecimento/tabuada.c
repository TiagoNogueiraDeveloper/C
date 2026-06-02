// Tiago Brandão
// 25/03/2026
// Tabuada Personalizada: Peça ao usuário um número inteiro e imprima a tabuada
// desse número (de 1 a 10).
#include <stdio.h>
int main()
{
    int i, numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    printf("A tabuada do %i \n", numero);
    for (i = 1; i <= 10; i++)
        {
            printf("\n %i x %2i = %2i \n", numero, i, (numero * i));
        }
    return 0;
}