// Contagem Regressiva: Escreva um programa que exiba uma contagem regressiva de
// 10 até 1, e ao final imprima "Vai!".
// Tiago Brandão
// 25/03/2026
#include <stdio.h>
int main()
{
    int contador;
    for (contador = 10; contador >= 1; contador = contador - 1)
    {
        printf("%i \n", contador);
    }
    printf("Vai!\n");

    return 0;
}