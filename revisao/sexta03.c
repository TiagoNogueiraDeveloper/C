#include <stdio.h>

int main(){
    int TAM = 10;
    int num[TAM];
    for (int i = 0; i <= TAM; i++)
    {
        printf("Digite um número: ", i);
        scanf("%i", &num[i]);
    }
    
    for (int i = TAM-1; i >= 0; i--)
    {
        printf("\n Numero %i: %i\n", i, num[i]);
    }
    
}