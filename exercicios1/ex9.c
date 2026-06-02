//Faça um programa que leia um valor inteiro correspondente a idade de uma pessoa em
//dias e informe-a em anos, meses e dias. Para facilitar o cálculo, considere todo ano com 365 dias e
//todo mês com 30 dias.
//Por exemplo: Para uma idade informada de 400 dias, a resposta será: 1 ano(s), 1 mês(es) e
//5 dia(s)
#include <stdio.h>
int main(){
    int diascru, anos, meses, diassemanos, diassemmeses;
    diascru = 720;
    anos = diascru / 365;
    diassemanos = diascru - anos * 365;
    meses = diassemanos / 30;
    diassemmeses = diassemanos - meses * 30;
    printf("Total de dias se tornam = %i anos, %i meses, %i dias",anos, meses, diassemmeses);
    return 0;

}