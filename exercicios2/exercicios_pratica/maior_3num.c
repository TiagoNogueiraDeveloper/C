// Leia três números inteiros e informe o maior deles.
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    printf("Digite o terceiro número: ");
    scanf("%i", &num3);
    if (num1 > num2 && num1 > num2)
    {
        printf("O primeiro número é o maior!\n");
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            printf("O segundo número é o maior!\n");
        }
        else
        {
            if (num3 > num1 && num3 > num2)
            {
                printf("O terceiro número é o maior!\n");
            }
            else{
                printf("Os número são iguais!\n");
            }
        }
    }
    return 0;
}