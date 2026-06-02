// 2. Soma e Média: Crie um script que receba 8 valores do tipo float, salve-os em um
// vetor e calcule a soma e a média aritmética de todos eles.
#include <stdio.h>
#define TAM 2

int main(){
    float VetorA[TAM], media;
    media = 0;
    printf("\nDigite os valores para o VetorA:");
    for (int i = 0; i < TAM; i++)
    {
        scanf(" %f", &VetorA[i]);
        media = media + VetorA[i];
    }
    printf("\nSoma dos valores: %f", media);
    printf("\nA média é %f!", media/TAM);

}