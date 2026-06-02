//Sistema de prestação
//Tiago Brandão Nogueira
//13/03/2026
//Uma loja vende seus produtos no sistema de entrada mais duas prestações, sendo que
//o valor da entrada deve ser igual ou maior do que as prestações. As prestações devem ser iguais.
//Por exemplo:
//◦ Se o valor da mercadoria for R$ 270,00, e a entrada for de R$ 90,00, as duas prestações
//serão iguais a R$ 90,00;
//◦ Se o valor da mercadoria for R$ 350,00, a entrada é de R$ 150,00 e as duas prestações
//são iguais a R$ 100,00.
//Escreva um programa que receba o valor da mercadoria e o valor da entrada e forneça o
//valor das duas prestações, de acordo com as regras acima.
#include <stdio.h>
int main(){ //Função
//Declaração de variáveis
    float valortotal, entrada, prestacao;
// Lógica do sistema
    valortotal = 420;
    entrada = 200;
    prestacao = (valortotal - entrada) / 2;
//Exibição dos resultados
    printf("Se o valor da mercadoria for R$%.2f, e a entrada for de R$%.2f, as duas prestações serão iguais a R$%.2f", valortotal, entrada, prestacao);
    return 0;
}