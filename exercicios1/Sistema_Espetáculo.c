//Sistema Espetáculo
//Tiago Brandão Nogueira
//13/03/2026
//Dado que um espetáculo teatral tem o custo de R$ 2700,00 e o preço do convite para
//esse espetáculo é R$ 30,00. Faça um programa para calcular e mostrar:
//a) A quantidade de convites que devem ser vendidos para que, pelo menos, o custo do
//espetáculo seja alcançado.
//b) A quantidade de convites que devem ser vendidos para que se tenha um lucro de 20%.
#include <stdio.h>
int main(){
//Declaração de variáveis
    int custocru, conv, qtdconv, lucro20;
    custocru = 2700;
    conv = 30;
//Lógica do programa
    qtdconv = custocru / conv;
    lucro20 = custocru * 1.20 / 30;
//Exibição do programa
    printf("A quantidade de convites para que o espetáculo se pague é %i, e para o lucro é de %i", qtdconv, lucro20);
    return 0;
}