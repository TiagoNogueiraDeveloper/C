#include <stdio.h>
int main(){
    double numpe;
    printf("Digite um numero a ser convertido de pés para polegadas, jardas, milhas e metros: ");
    scanf("\n%lf", &numpe);
    double pepolegadas = numpe * 12;
    double pejarda = numpe / 3;
    double pemilha = numpe / 5280;
    double pemetros = numpe * 0.3;
    printf("\nSeu número de pés é igual a: %lf polegadas!", pepolegadas);
    printf("\nSeu numero de pés é igual a: %lf jardas!", pejarda);
    printf("\nSeu número de pés é igual a: %lf milhas!", pemilha);
    printf("\nSeu número de pés é igual a: %lf metros!", pemetros);
    return 0;


}