// 3. Comprimento Manual: Desenvolva uma função que replique o comportamento da função
// strlen, ou seja, receba uma string e retorne a quantidade de caracteres dela sem usar a
// biblioteca <string.h>.
#include <stdio.h>
// #include <string.h>
#include <ctype.h>
#define TAM 50

int main(){
    char palavraLida[TAM];
    int contadorCaracteres = 0;
    printf("Digite uma palavra a ser lida (sem espacos): ");
    scanf("%s", palavraLida);
    do
    {
        if (palavraLida[contadorCaracteres] != '\0' && !isspace(palavraLida[contadorCaracteres])) {
            contadorCaracteres++;
        }
    } while (palavraLida[contadorCaracteres] != '\0');
    printf("O comprimento da palavra e: %d\n", contadorCaracteres);
}