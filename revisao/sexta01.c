#include <stdio.h>

int main(){
    int NumeroEscolhido, NumeroX2;
    NumeroX2 = NumeroEscolhido * 2;
    for(int i = 1; i<=3; i++){
        printf("Digite um número: ");
        scanf("%i\n", &NumeroEscolhido);
        printf("O dobro de %i é %i\n", NumeroEscolhido, NumeroX2);
        if (NumeroX2 >= 100)
        {
            printf("O dobro do seu número é maior ou igual a 100!\n");
        }
        else{
            printf("O dobro do seu número é menor que 100!\n");
        }
    }
        return 0;
}