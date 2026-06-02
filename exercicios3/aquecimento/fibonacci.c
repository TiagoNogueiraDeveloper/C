// Sequência de Fibonacci: Imprima os primeiros n termos da sequência de Fibonacci
// (0, 1, 1, 2, 3, 5, 8, 13...).
// Tiago Brandão
// 25/03/2026
#include <stdio.h>
int main()
{
    int n_termos, i, t1, t2, proximo;
    t1 = 0;
    t2 = 1;
    printf("Digite a quantidade de termos que gostaria de saber da sequência de Fibonacci: ");
    scanf("%i", &n_termos);
    for (i = 0; i <= n_termos; i++)
    {
        printf("%i ", t1);
        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
    }
    return 0;
}