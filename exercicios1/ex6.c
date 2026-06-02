//Faça um programa para calcular a quantidade de combustível gasto em uma viagem. O
//programa deve receber a quantidade de km por litro que o automóvel que faz, o tempo gasto e a
//velocidade média durante a viagem.
#include <stdio.h>
int main(){
    float qtdkml, tempgasto, velmed, kmtotal, qtdcombviagem;
    qtdkml = 11; //11 quilometros por litro
    tempgasto = 2; // tempo em horas
    velmed = 70; // quilometro por hora
    kmtotal = velmed * tempgasto;
    qtdcombviagem = kmtotal / qtdkml;
    printf("A quantidade de combustivel usado para esta viagem é %f litros", qtdcombviagem);
    return 0;
}