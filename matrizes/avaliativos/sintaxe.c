// LEITURA DE DADOS E EXIBIÇÃO - MATRIZES BIDIMENSIONAL- APRIMOREI O PROGRAMA COM LEITURA
// Tiago Nogueira 30/05/2026
#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main(){
    int MAT[LINHA][COLUNA]={{1,2,3}, {4,5,6}, {7,8,9}};
    // for (int i = 0; i < LINHA; i++){
    //     for (int j = 0; j < COLUNA; j++)
    //     {
    //         printf("Digite o valor da linha %d, coluna %d: ", i, j);
    //         scanf("%d", &MAT[i][j]);
    //     }
        
    // }
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Na linha %d,  na coluna %d, tem-se o valor: %d\n", i, j, MAT[i][j]);
        }
        
    }
    
    return 0;
}