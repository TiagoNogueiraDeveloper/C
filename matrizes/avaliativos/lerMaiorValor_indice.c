// Exercício 4: Fazer um programa que leia uma matriz A de dimensão 4 x 3 contendo números
// inteiros, calcule e exiba:
// a) o maior valor;
// b) a posição (índices) do maior elemento.
// Tiago Nogueira 30/05/2026
#include <stdio.h>
#define LINHA 4
#define COLUNA 3

int main(){
    int A[LINHA][COLUNA];
    int maiorValor = 0;
    int indiceLinhaDeMaiorValor = 0;
    int indiceColunaDeMaiorValor = 0;

    // Leitura da matriz
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            printf("Digite o valor para linha %d, coluna %d: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Encontrar o maior valor e sua posição
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(A[i][j] > maiorValor){
                maiorValor = A[i][j];
                indiceLinhaDeMaiorValor = i;
                indiceColunaDeMaiorValor = j;
            }
        }
    }

    // Exibir o maior valor e sua posição
    printf("O maior valor é: %d\n", maiorValor);
    printf("A posição do maior valor é: A[%d][%d]\n", indiceLinhaDeMaiorValor, indiceColunaDeMaiorValor);

    return 0;
}