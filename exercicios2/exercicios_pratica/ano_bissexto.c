// Leia um ano e informe se ele é bissexto.
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int ano;
    printf("Digite o ano a ser decifrado: ");
    scanf("%i", &ano);
    if ((ano % 4) == 0)
    {
        printf("Este ano é bissexto!\n");
    }
    else
    {
        printf("Este ano não é bissexto!\n");
    }
    return 0;
}