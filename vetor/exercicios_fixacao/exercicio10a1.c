// 2. Dado um vetor B definido como int B[10], preenchê-lo com os números inteiros 10,9,8,…,1.
#include <stdio.h>
const int vetnum = 10;
int main(){
    // Declaração do vetor
    int B[vetnum];
    // Atribuição dos valores
    // Na linguagem C, o primeiro índice é 0
    for (int i = vetnum; i > 0; i--)
    {
        B[i] = i;
    }
    

    // Impressão do vetor
    printf("\n Vamos exibir o vetor... \n");
    for (int i = vetnum; i > 0;i--)
    {
        printf("\n%d\n", B[i]);
    }


    return 0;
}