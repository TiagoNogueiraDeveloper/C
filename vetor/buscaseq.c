#include <stdio.h>
// #include "pesquisasequencial.c"
#define TAM 10
int PesqSeq( int numeros[], int buscar);
int PesqBinar( int numeros[], int x);
int main(){
    // int numeros[TAM] = {32, 27, 64,
    // 18, 95, 14, 90, 70, 60, 37};
    int numeros[TAM] = { 14, 18, 27, 32, 37, 60, 64 , 70, 90, 95};
    int buscar, posicao;

    printf("Digite o valor que voce quer encontrar: ");
    scanf("%d", &buscar);
    posicao = PesqBinar(numeros, buscar);
    // posicao = PesqSeq(numeros, buscar);
    if (posicao == -1)
    {
        printf("\nValor não encontrado");
    }
    else{
        printf("\nValor encontrado, na posição %d!\n", posicao+1);
    }
    return 0;
}
int PesqBinar( int numeros[], int x){
    int ini = 0, fim=TAM, meio;
    while (ini <= fim)
    {
        meio = (ini + fim) /2;
        if (numeros[meio] == x)
        {
            return meio;
        }
        if (numeros[meio] < x)
        {
            ini = meio+1;
        }
        if (numeros[meio] < x)
        {
            fim = meio-1;
        }
    return(-1);
        
        
    }
    
}




int PesqSeq(int numeros[], int x){
    int i = 0;
    while ((numeros[i] != x) && (i<TAM))
    {
    i++;
     if (i<TAM)
     {
        return(i);
     }
     else{
        return(-1);
     }
        
    }
    
}