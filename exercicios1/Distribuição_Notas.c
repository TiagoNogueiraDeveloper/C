//Distribuição Notas
//Tiago Brandão Nogueira
//13/03/2026
//Um programa para gerenciar os saques de um caixa eletrônico deve possuir um
//mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente
//que realizou o saque. O critério da distribuição ótima tenta distribuir as notas de menor valor em
//número mínimo possível.
//Por exemplo, considere que a máquina só dispõe de notas de R$ 50, de R$ 10, de R$ 5 e de
//R$ 1. Para uma quantia solicitada de R$ 87, o programa deve indicar uma nota de R$ 50,
//três notas de R$ 10, uma nota de R$ 5 e duas notas de R$ 1.
//Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das
//notas de acordo com o critério da distribuição ótima.
#include <stdio.h>
int main(){
//Declaração de variáveis    
    int quantia, notacinquenta, notadez, notacinco, nota1, quantia_sem_cinquenta, quantia_sem_dez, quantia_sem_cinco;
    quantia = 97;
//Lógica do programa
    notacinquenta = quantia / 50;
    quantia_sem_cinquenta = quantia - notacinquenta * 50;
    notadez = quantia_sem_cinquenta / 10;
    quantia_sem_dez = quantia - notacinquenta * 50 - notadez * 10;
    notacinco = quantia_sem_dez / 5;
    quantia_sem_cinco = quantia - notacinquenta * 50 - notadez * 10 - notacinco * 5;
    nota1 = quantia_sem_cinco / 1;
//Exibição do programa
    printf("\nPara a quantia %i, é necessário %i notas de cinquenta, %i notas de dez, %i notas de cinco e %i notas de um\n", quantia, notacinquenta, notadez, notacinco, nota1);
    return 0;
}
