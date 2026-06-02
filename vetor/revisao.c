// Programa para revisar conceitos de vetores em C
// 15/05/2026 - Tiago Brandão
#include <stdio.h>
#define TAM 5
int exibe_vetor(int vetor[]);
int main(){
    //Declaração de vetor com atribuição direta de valores
    int vet_a[TAM] = {32, 27, 64, 18, 95};
    // Declaração do vetor onde o usuario vai digitar os valores
    int vet_b[TAM];

    // Para o usuário digitar os valores, é preciso informar
    // o valor de cada posição
    printf("\nDigite os valores do vetor B: \n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor do índice %d: \n", i);
        scanf("%i", &vet_b[i]);
    }
    //GENERICO: NA MAIORIA DOS CASOS AQUI ENTRAM AS REGRAS DO NEGOCIO
    // OU OS CALCULOS

    // Exibe os dados dos vetores
    printf("\nValores do vetor A são:");
    for (int i = 0; i < TAM; i++)
    {
        exibe_vetor(vet_a);
    }
    printf("\nValores do vetor A fechado!");
    exibe_vetor(vet_a);
    printf("\nValores do vetor B são:");
    exibe_vetor(vet_b);
    printf("\nValores do vetor B fechado!\n");
    
    
    
    
    return 0;
}

int exibe_vetor(int vetor[]){
    for (int i = 0; i < TAM; i++)
    {
        printf(" %i",vetor[i]);
    }

    return 0;
}