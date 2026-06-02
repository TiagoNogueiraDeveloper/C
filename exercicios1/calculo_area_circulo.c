//Sistema de cálculo da área do círculo
//Tiago Brandão Nogueira
//13/03/2026
#include <stdio.h>
int main(){
//Declaração de variáveis e seus valores
    double pi = 3.14159; //Constante do PI
    float raio = 2; //Raio imaginário
    float raioquadrado = raio * raio; //Cálculo de raio elevado a 2
    double resultado = raioquadrado * pi; //Resultado final da área
//Exibição do programa    
    printf("O Resultado da área do circulo é = %f\n", resultado);
    return 0;

}