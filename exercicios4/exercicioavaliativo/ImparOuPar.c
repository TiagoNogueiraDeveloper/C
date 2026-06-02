#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumeroAleatorio(int min, int max);
int paridade(int num);

int main() {
    int numero_Jogador, numero_Computador, soma, escolha;
    printf("--- Jogo de Par ou Impar ---\n\n");
    // entrada do número do Jogador
    do {
        printf("Digite um numero inteiro (0 a 100): ");
        scanf("%d", &numero_Jogador);

        if (numero_Jogador < 0 || numero_Jogador > 100) {
            printf("Erro: O numero deve estar entre 0 e 100.\n");
        }
    } while (numero_Jogador < 0 || numero_Jogador > 100);

    // o jogador escolhe Par ou Ímpar
    do {
        printf("Voce quer Par ou Impar? (1/0): ");
        scanf("%d", &escolha);
        if (escolha < 0 || escolha > 1) {
            printf("Opcao invalida! Use '1' para Par ou '0' para Impar.\n");
        }
    } while (escolha < 0 || escolha > 1);


    numero_Computador = gerarNumeroAleatorio(0,100); // Gera número de 0 a 100

    // calculo do resultado
    soma = numero_Jogador + numero_Computador;
    printf("\n Voce jogou: %d", numero_Jogador);
    printf("\n Computador jogou: %d", numero_Computador);
    printf("\n Soma: %d ", soma);

    // verificacao do Vencedor
    if ( paridade(soma)) {     
        printf("(Par) ");
        if (escolha == 1) {
            printf("Você ganhou!\n");
        } else {
            printf("Você perdeu!\n");
        }
    } else {
        printf("(Impar) ");
        if (escolha == 0) {
            printf("Você ganhou!\n");
        } else {
            printf("Você perdeu!\n");
        }
    }
    return 0;
}

int gerarNumeroAleatorio(int min, int max){
    srand((unsigned)time(NULL));
    return( min+rand()%max );
}

int paridade(int par)
{
    if ((par % 2) == 0)
    {
        return (1);
    }
    else
    {
        return(0);
    }
}

