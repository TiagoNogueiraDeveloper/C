// Escreva uma função que, dado um vetor ordenado, forneça a maior diferença entre dois elementos
// consecutivos, fornecendo também as posições dos elementos que geraram esta maior diferença.
// Por exemplo, se o vetor dado for v = {3, 5, 9, 16, 17, 20, 26, 31}, a função deve fornecer como maior
// diferença o valor 7 (16 - 9) e as posições 4 e 3
// 15/05/2026 - Tiago
#include <stdio.h>
#define TAM 8
int exibe_vetor(int vetor[]);
int main(){
    //Declaração de vetor com atribuição direta de valores
    int vet_a[TAM] = {3, 5, 9, 16, 17, 20, 26, 31};
    int diferenca;
    int posicao = 0;


    //GENERICO: NA MAIORIA DOS CASOS AQUI ENTRAM AS REGRAS DO NEGOCIO
    // OU OS CALCULOS
    diferenca = vet_a[1] - vet_a[0];
    for (int i = 0; i < TAM -1; i++)
    {
        if (vet_a[i+1] - vet_a[i] > diferenca)
        {
            diferenca = vet_a[i+1] - vet_a[i];
            posicao = i;
        }
        
    }
    printf("Posições %i e %i;\n", posicao, posicao+1);
    printf("A maior diferença é: %i\n", diferenca);

    // Exibe os dados dos vetores
    // printf("\nValores do vetor A são:");
    // for (int i = 0; i < TAM; i++)
    // {
    //     exibe_vetor(vet_a);
    // }
    // printf("\nValores do vetor A fechado!");
    // exibe_vetor(vet_a);

    
    
    
    
    return 0;
}

int exibe_vetor(int vetor[]){
    for (int i = 0; i < TAM; i++)
    {
        printf(" %i",vetor[i]);
    }

    return 0;
}