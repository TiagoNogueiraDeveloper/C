// 1. Dado um vetor A definido como int A[10], preenchê-lo com os números inteiros 1,2,3, ...,10.
#include <stdio.h>
const int vetnum = 11;
int main(){
    // Declaração do vetor
    int vetorA[vetnum];
    // Atribuição dos valores
    // Na linguagem C, o primeiro índice é 0
    for (int i = 1; i < vetnum; i++)
    {
        vetorA[i] = i;
    }
    

    // Impressão do vetor
    printf("\n Vamos exibir o vetor... \n");
    for (int i = 1; i < vetnum; i++)
    {
        printf("\n%d\n", vetorA[i]);
    }


    return 0;
}