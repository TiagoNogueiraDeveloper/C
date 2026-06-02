// Leia o valor de uma compra e calcule o valor final:
// • Até 100 → sem desconto
// • De 101 a 500 → 10% de desconto
// • Acima de 500 → 15% de desconto
// Tiago Brandão
#include <stdio.h>
int main()
{
    double valorcompra, valor_com_desconto;
    printf("Digite o preço da compra: ");
    scanf("%lf", &valorcompra);
    if (valorcompra <= 100 && valorcompra >= 0)
    {
        printf("Seu valor final com desconto é R$%.2lf\n", valorcompra);
    }
    else
    {
        if (valorcompra > 100 && valorcompra <= 500)
        {
            valor_com_desconto = valorcompra * 0.90;
            printf("Seu valor final com desconto é R$%.2lf\n", valor_com_desconto);
        }
        else
        {
            if (valorcompra > 500 && valorcompra != 0)
            {
                valor_com_desconto = valorcompra * 0.85;
                printf("Seu valor final com desconto é R$%.2lf\n", valor_com_desconto);
            }
            else
            {
                printf("Digite um número válido!\n");
            }
        }
    }
    return 0;
}