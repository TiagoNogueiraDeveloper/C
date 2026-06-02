// 3. Fazer um programa que leia um vetor A contendo 5 números inteiros, calcule e exiba:
// a) O maior elemento;
// // b) A posição (índice) do maior elemento.
#include <stdio.h>
const int TAM = 5;
int main(){
    int vetorA[TAM];
    int maior, posicao;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor [%i]", i);
        scanf("%i", &vetorA[i]);
    }
    posicao = 0;
    maior = vetorA[0];
    for (int i = 0; i < TAM; i++)
    {
        if (vetorA[i] > maior)
        {
            posicao = i;
            maior = vetorA[i];
        }
        
    }
    printf("\n Meu maior é igual %i, na posição %i\n", maior, posicao);

}