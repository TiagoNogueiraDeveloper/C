#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include "pesquisasequencial.c"
#define TAM 16

int PesqSeq( int numeros[], int buscar);
int gerarNumeroAleatorio(int min, int max);

int main(){
    // int numeros[TAM] = {32, 27, 64,
    // 18, 95, 14, 90, 70, 60, 37};
    int numeros[TAM];
    int buscar, posicao;
    int x, n =0;
    while (n<TAM)
    {
        x = gerarNumeroAleatorio(1,512);
        if (PesqSeq(numeros, x) == -1)
        {
            numeros[n] = x;
            n++;
        }
        
    }
    
    for (int i = 0; i < TAM; i++)//Aleatorizar um número e armazenar nos indices, até chegar no ultimo indice
    {
        numeros[i] = gerarNumeroAleatorio(1, 512);
    }


    printf("Digite o valor que voce quer encontrar: ");
    scanf("%d", &buscar); // Usuario insere um numero
    // posicao = PesqSeq(numeros, buscar);
    posicao = PesqSeq(numeros, buscar); //Função verifica se o numero esta em algum indice
    if (posicao == -1) //Caso não encontrar o numero em nenhum indice
    {
        printf("\nValor não encontrado\n");
    }
    else{ // Encontrou o numero em algum indice
        printf("\nValor encontrado, na posição %d!\n", posicao+1);
    }
    // Exibe o vetor
    printf("O conjunto de números= \n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%i ", numeros[i]);
    }
    
    return 0;
}

int PesqSeq(int numeros[], int x){ //Pesquisa sequencial em todos os indices do vetor, 1 por 1
    int i = 0;
    while ((numeros[i] != x) && (i<TAM))
    {
    i++;}

     if (i<TAM)
     {
        return(i);
     }
     else{
        return(-1);
     }
        
    
}

int PesqBinar(int numeros[], int x){ // Pesquina binaria partindo do indice do meio
    int ini = 0, fim = TAM, meio;
    meio = ini+fim/2;
    while (ini<=fim)
    {
        if (numeros[meio] == x)
        {
            return meio;
        }
        if (numeros[meio] < x)
        {
            ini = meio + 1;
        }
        if (numeros[meio] > x)
        {
            fim = ini - 1;
        }
    }
           
    return -1;
}

int gerarNumeroAleatorio(int min, int max){ // Gerar numero aleatorio
    return min + rand() % (max-min +1);
}
