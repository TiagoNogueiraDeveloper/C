#include <stdio.h>
#define TAM 7

int exibir_vetorSeq(int vet[]);
int compara_prox(int vet[]);
int acharNoVet(int vet[]);

int main(){
    // Declaração do vetor
    int vetA[TAM] = {5,4,7,8,3,2,9};
    // int aux;
    // int pos = -1;
    // Variavel que sera usada na troca dos valores dos elementos
    // Exibe os elementos do veto, percorre a posicão inicial até a final
    printf("\nExibindo os elementos do vetor:");
    exibir_vetorSeq(vetA);
    
    compara_prox(vetA);
    // for (int i = 0; i < TAM-1; i++)
    // {
    //     for (int j = i+1; j < TAM; j++)
    //     {
    //         if (vetA[i] > vetA[j])
    //         {
    //             aux = vetA[i];
    //             vetA[i] = vetA[j];
    //             vetA[j] = aux;
    //         }
            
    //     }
        
    // }
    printf("\nExibindo os elementos do vetor ordenado:");
    exibir_vetorSeq(vetA);

    
    int posFinal = acharNoVet(vetA);
    if (posFinal == -1)
    {
        printf("\nO valor não foi encontrado no vetor");
    }
    else{
        printf("\nO valor está na posicão %i!", posFinal);
    }
    
    return 0;
}

int exibir_vetorSeq(int vet[]){
    for (int i = 0; i < TAM; i++)
    {
        printf(" %d", vet[i]);
    }
    return 0;
}

int compara_prox(int vet[]){
    int aux;
    for (int i = 0; i < TAM; i++)
    {
        for (int j = i+1; j < TAM; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
            
        }
        
    }
    return 0;
    
}

int acharNoVet(int vet[]){
    int pos = -1;
    int X;
    printf("\nInsira o valor a ser procurado: ");
    scanf(" %d", &X);
    for (int i = 0; i < TAM; i++)
    {
        if (X == vet[i])
        {
            pos = i;
        }
    }
    return pos;
}
