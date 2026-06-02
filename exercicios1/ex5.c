//Somar duas frações ordinárias, fornecendo o resultado em forma de fração.
#include <stdio.h>

int main(){
    int num1, denom1, num2, denom2, num3, denom3;
    double frac1, frac2, frac3;
    num1 = 1;
    denom1 = 4;
    frac1 = num1 / denom1;
    num2 = 2;
    denom2 = 4;
    frac2 = num2 / denom2;
    denom3 = denom1 * denom2;
    num3 = num1 * denom2 + num2 * denom1;
    frac3 = frac1 + frac2;
    printf("O numerador da soma das frações é %i, o denominador é %i, e o seu resultado decimal é %lf", num3, denom3, frac3);
    return 0;
}