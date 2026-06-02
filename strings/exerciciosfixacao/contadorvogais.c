// 1. Contador de Vogais: Escreva um programa que leia uma palavra usando scanf e informe
// quantas vogais (a, e, i, o, u) ela possui.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 50

int main(){
    char palavraLida[TAM];
    int contadorVogais = 0;
    printf("Digite uma palavra a ser lida (sem espaços): ");
    scanf("%s", palavraLida);
    while (palavraLida[contadorVogais] != '\0')
    {
        if (tolower(palavraLida[contadorVogais]) == 'a' || tolower(palavraLida[contadorVogais]) == 'e' || tolower(palavraLida[contadorVogais]) == 'i' || tolower(palavraLida[contadorVogais]) == 'o' || tolower(palavraLida[contadorVogais]) == 'u')
        {
            contadorVogais++;
        }
    }
    printf("A palavra %s possui %i vogais.\n", palavraLida, contadorVogais);
    return 0;
}