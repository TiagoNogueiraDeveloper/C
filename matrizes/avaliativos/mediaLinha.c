// Escreva uma função que determine as médias de cada uma das linhas de uma matriz.
// Por exemplo, se a matriz dada for ... a função deve fornecer a matriz com uma nova coluna contendo as médias de cada linha.
// Tiago Nogueira 30/05/2026
#include <stdio.h>
int mediaLinha(int matriz[3][3], int linhas, int colunas, float media[3]) {
    for (int i = 0; i < linhas; i++) { // Loop para percorrer cada linha da matriz
        int soma = 0; // Variável para armazenar a soma dos elementos da linha
        for (int j = 0; j < colunas; j++) { // Loop para percorrer cada elemento da linha
            soma += matriz[i][j]; // Adiciona o elemento da linha à soma
        }
        media[i] = (float)soma / colunas; // Calcula a média da linha
    }
    return 0;
}