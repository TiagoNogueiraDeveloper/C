// LEITURA DE DADOS A PARTIR DA ESCOLHA DE ALOCAÇÃO DO USUÁRIO E EXIBIÇÃO - MATRIZES BIDIMENSIONAL
#include <stdio.h>
#define LINHA 2
#define COLUNA 2

int main(){
    int MAT[LINHA][COLUNA];
    int linhaDesejada, colunaDesejada;
    // LEITURA DE VALORES
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            // ESCOLHA DA LINHA A TER UM DADO INSERIDO
            printf("\nDigite o valor da linha a ser modificada: ");
            scanf("%d", &linhaDesejada);
            if (linhaDesejada > LINHA || linhaDesejada < 0)
            {
                printf("Digite uma linha existente!\n");
            }
            else{
                // ESCOLHA DA COLUNA A TER UM DADO INSERIDO
                printf("\nDigite o valor da coluna a ser modificada: ");
                scanf("%d", &colunaDesejada);
                if (colunaDesejada > COLUNA || colunaDesejada < 0)
                {
                    printf("Digite uma coluna existente!\n");
                }
                else{
                    // INSERÇÃO DE DADOS COM BASE NA LINHA E COLUNA ESCOLHIDA PELO USUÁRIO
                    printf("Digite o valor da linha %d, coluna %d: ", linhaDesejada, colunaDesejada);
                    scanf("%d", &MAT[linhaDesejada][colunaDesejada]); 
                }
            }
        }
        
    }
    // EXIBIÇÃO DE VALORES
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Na linha %d,  na coluna %d, tem-se o valor: %d\n", i, j, MAT[i][j]);
        }
        
    }
    
    return 0;
}