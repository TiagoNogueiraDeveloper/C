#include <stdio.h>
const int TamVetor = 5;
int main() {
    // Declaração do vetor
    int vetor[TamVetor];
    // Atribuição dos valores
    // Na linguagem C, o primeiro índice é 0
    for (int i = 0; i < TamVetor; i++)
    {
        vetor[i] = i*10;
    }
    

    // Impressão do vetor
    printf("\n Vamos exibir o vetor... \n");
    for (int i = 0; i < TamVetor; i++)
    {
        printf("\n%d\n", vetor[i]);
    }


    return 0;
}