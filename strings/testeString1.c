#include <stdio.h>
#include <string.h>
#define TAM 20

int main(){
    char nome[TAM];
    char sobrenome[TAM];
    char nome2[TAM]= "Gabriel";
    strcpy(nome, "Tiago");
    strcpy(sobrenome, " Brandão");
    printf("Comparando %s com %s: %i\n", nome, nome2, strcmp(nome, nome2));
    if (strcmp(nome, nome2) == 0)
    {
        printf("São iguais!\n");
    }
    else if (strcmp(nome, nome2) > 0)
    {   
        printf("A primeira string é maior!\n");
    }
    else{
        printf("A segunda string é maior!\n");
    }
    
    
    printf("O nome é %s\n", nome);
    printf("O sobrenome é %s\n", sobrenome);
    strcat(nome, sobrenome);
    printf("Nome completo: %s\n", nome);
    printf("O nome é Tiago Brandão? %i\n", strcmp(nome, "Tiago Brandão"));
    printf("O nome é Tiago Joselino? %i\n", strcmp(nome, "Tiago Joselino"));
    printf("O nome %s possui %i caractéres!\n", nome, strlen(nome));
    return 0;
}