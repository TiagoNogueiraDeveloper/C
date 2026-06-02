#include <stdio.h>
const int TAMVETORES = 5;
int main(){
    int VetorA[TAMVETORES], vetorB[TAMVETORES];
    for (int i = 0; i <= TAMVETORES-1; i++)
    {
        printf("Digite o valor do vetorA: ");
        scanf("%i", &VetorA[i]);
    }
    for (int i = 0; i <= TAMVETORES-1; i++)
    {
        vetorB[i] = VetorA[i];
    }
    for (int i = TAMVETORES -1; i >= 0; i--)
    {
        printf("VetorB = %i\n", vetorB[i]);
    }
    
    
}