// 2. Impressão Inversa: Crie um programa que receba uma string qualquer e a exiba na tela de
// trás para frente, caractere por caractere.
#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
    char palavraOrdemNormal[TAM];
    printf("Digite uma palavra a ser lida (sem espacos): ");
    fgets(palavraOrdemNormal, TAM, stdin);
    for (int i = strlen(palavraOrdemNormal) - 1; i >= 0; i--)
    {
        printf("%c", palavraOrdemNormal[i]);
    }
    
    return 0;
}