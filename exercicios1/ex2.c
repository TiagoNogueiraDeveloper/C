#include <stdio.h>
int main(){
    int numinvert;
    printf("Digite um número de 3 algarismos a ser invertido: ");
    scanf("%i", &numinvert);
    int c = numinvert / 100;
    int d = (numinvert - c * 100) / 10;
    int u = (numinvert - c * 100) - d * 10;
    printf("Seu número invertido é: %i%i%i", u, d, c);
    return 0;
}