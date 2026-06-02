// LEITURA DE DADOS E EXIBIÇÃO - MATRIZES BIDIMENSIONAL
// Tiago Nogueira 30/05/2026
#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main(){
    double MAT[LINHA][COLUNA];
    double soma;
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Digite o valor da linha %d, coluna %d: ", i, j);
            scanf("%lf", &MAT[i][j]);
            soma = soma + MAT[i][j];
        }
        
    }
    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Na linha %d,  na coluna %d, tem-se o valor: %lf\n", i, j, MAT[i][j]);
        }
        
    }
    printf("A soma de todos os números é %lf", soma);
    return 0;
}