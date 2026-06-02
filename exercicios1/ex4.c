//Determinar o maior múltiplo de um inteiro dado menor do que ou igual a um outro inteiro
//dado.
//Por exemplo: o maior múltiplo de 7 menor que 50 é 49.
#include <stdio.h>
int main(){
    int num1, num2, sobra, maior;
    num1 = 9;
    num2 = 105;
    sobra = num2 % num1;
    maior = num2 - sobra;
    printf("\nMaior múltiplo é: %i\n", maior);
    return 0;
}