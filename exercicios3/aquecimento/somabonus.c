#include <stdio.h>
#include <unistd.h>
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
        printf("O valor passou para: %i \n", soma);
        fflush(stdout);
        sleep(1);
    }
    return 0;