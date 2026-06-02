// 1. Inversão de Ordem: Escreva um programa que leia 10 números inteiros do usuário,
// armazene-os em um vetor e os exiba na ordem inversa à da leitura (do último para o
// primeiro).
#include <stdio.h>
#define TAM 10

int main(){
    int VetorA[TAM];
    printf("\nDigite os valores para o primeiro vetor:");
    for (int i = 0; i < TAM; i++)
    {
        scanf(" %d", &VetorA[i]);

    }
    printf("\nVetor A invertido:");
    for (int i = 0; i < TAM; i++)
    {
        printf(" %d", VetorA[TAM-1-i]);
    }
    printf("\n");
}