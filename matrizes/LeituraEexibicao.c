// LEITURA DE DADOS E EXIBIÇÃO - MATRIZES BIDIMENSIONAL
#include <stdio.h>
#define LINHA 2
#define COLUNA 3

int main(){
    int MAT[LINHA][COLUNA];
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Digite o valor da linha %d, coluna %d: ", i, j);
            scanf("%d", &MAT[i][j]);
        }
        
    }
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Na linha %d,  na coluna %d, tem-se o valor: %d\n", i, j, MAT[i][j]);
        }
        
    }
    
    return 0;
}