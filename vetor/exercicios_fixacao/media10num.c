#include <stdio.h>
const int TAM = 10;
int main() {
    int Notas[TAM], NotasTotal, Media;
    NotasTotal = 0;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite um número: ");
        scanf("%i", &Notas[i]);
        NotasTotal = NotasTotal + i;
    }
    Media = NotasTotal / TAM;
    for (int i = 0; i < TAM; i++)
    {
        if (Notas[i] > Media)
        {
            printf("O número %i está acima da média!\n", Notas[i]);
        }
        
    }
    
}