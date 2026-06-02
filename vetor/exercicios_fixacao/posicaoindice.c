#include <stdio.h>
const int VETTAM = 10;
int main(){
    int VetLeitura[VETTAM], ValorProcurado;
    for (int i = 0; i < VETTAM; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%i", &VetLeitura[i]);
    }
    printf("Digite o valor a ser procurado no vetor: ");
    scanf("%i", &ValorProcurado);
    for (int i = 0; i < VETTAM; i++)
    {
        if (VetLeitura[i] == ValorProcurado)
        {
            printf("O valor %i está dentro do vetor e na posição %i!\n", VetLeitura[i], i);
        }
        else{
            printf("O valor %i não está dentro do vetor!\n");
        }
    }
    
    return 0;
}