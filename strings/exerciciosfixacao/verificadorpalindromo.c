// 1. Verificador de Palíndromos: Crie um programa que leia uma frase usando fgets,
// remova o caractere de nova linha e determine se ela é um palíndromo (se lê da mesma forma
// de frente para trás e de trás para frente, desconsiderando espaços, como "arara" ou
// "anotaram a data da maratona").
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 100

int main(){
    char frase[TAM];
    int fim = strlen(TAM-1), inicio = 0, contador = 0;

    printf("Digite uma frase a ser verificada: ");
    fgets(frase, TAM, stdin);
    // Remove o caractere de nova linha
    frase[strcspn(frase, "\n")] = '\0';
    for (int i = 0; i < strlen(frase); i++){
        if (frase[inicio+i] == frase[fim-i]){
            contador++;
        }
    }
    // Torna tudo minusculo
    for (int i = 0; i < strlen(frase); i++){
        tolower(frase[i]);
    }
    // Remove espaco
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    if (contador == strlen(frase))
    {
        printf("Temos um palindromo!\n");
    }
    else{
        printf("Nao temos um palindromo!\n");
    }
    return 0;
}