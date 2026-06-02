// LEITURA DE DADOS E EXIBIÇÃO - MATRIZES BIDIMENSIONAL
// Tiago Nogueira 30/05/2026
#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main(){
    int MAT[LINHA][COLUNA];
    ler_Matriz(MAT);
    exibir_Matriz(MAT);
    return 0;
}

int exibir_Matriz(int MAT[LINHA][COLUNA]){
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Na linha %d,  na coluna %d, tem-se o valor: %d\n", i, j, MAT[i][j]);
        }
        
    }
    return 0;
}

int ler_Matriz(int MAT[LINHA][COLUNA]){
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Digite o valor da linha %d, coluna %d: ", i, j);
            scanf("%d", &MAT[i][j]);
            // soma = soma + MAT[i][j];
        }
        
    }
    return 0;
}