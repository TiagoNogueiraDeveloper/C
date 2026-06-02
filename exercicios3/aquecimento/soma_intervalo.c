// Soma de Intervalo: Peça dois números inteiros (início e fim) e calcule a soma de todos
// os números entre eles (inclusive).
// Tiago Brandão
// 25/03/2026
#include <stdio.h>
int main(){
    int num_inicio, num_fim, contador, soma;
    soma = 0;
    printf("Digite o número de início: ");
    scanf("%i \n", &num_inicio);
    printf("Digite o número do fim: ");
    scanf("%i \n", &num_fim);
    for (contador = num_inicio; contador <= num_fim; contador++)
    {
        soma = soma + contador;
    }
    printf("O valor da soma é: %i \n", soma);
    return 0;
}