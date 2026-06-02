#include <stdio.h>

int main(){
    double faren;
    printf("Digite a temperatura em fahrenheit a ser convertida para celsius: ");
    scanf("%lf", &faren);
    double celsius1 = faren * 1.8;
    double celsius2 = celsius1 + 32;
    printf("\nSua temperatura convertida é: %f", celsius2);
    return 0;
}