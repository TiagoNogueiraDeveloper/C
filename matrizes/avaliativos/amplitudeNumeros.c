// Exercício 5: A amplitude de uma relação de números reais é a diferença entre o maior e o menor
// valor da relação. Por exemplo, a amplitude da relação 5, 7, 15, 2, 23 21, 3, 6 é 21 (porque 23 – 2 =
// 21). Escreva uma função que receba uma matriz M x N e forneça sua amplitude.
#include <stdio.h>
int amplitude(int m, int n, int matriz[m][n]) {
    int max = matriz[0][0]; // Inicializa o maior valor com o primeiro elemento
    int min = matriz[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] > max) { // Determina o maior valor
                max = matriz[i][j];
            }
            if (matriz[i][j] < min) { // Determina o menor valor
                min = matriz[i][j];
            }
        }
    }
    return max - min; // Calcula a amplitude
}