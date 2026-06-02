//Escreva um programa que converta um intervalo de tempo dado em minutos para
//horas, minutos e segundos.
//Por exemplo, se o tempo dado for 145.87 min, o programa deve fornecer 2 h 25 min 52.2 s
//(vale lembrar que o ponto é o separador da parte inteira).
#include <stdio.h>
int main(){
    float minutocru, segundos, segundosdecimal;
    int minutos, horas;
    minutocru = 123.70;
    horas = minutocru / 60;
    minutos = minutocru - 60 * horas;
    segundosdecimal = (minutocru - 60 * horas) - minutos;
    segundos = segundosdecimal * 60;
    printf("O total é %i horas, %i minutos, %f segundos", horas, minutos, segundos);
    return 0;
}