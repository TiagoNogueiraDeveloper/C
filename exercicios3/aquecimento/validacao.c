// Validação de Dados: Use um laço do-while para pedir que o usuário digite um número
// entre 0 e 10. Se ele digitar algo fora desse intervalo, o programa deve continuar
// pedindo para o usuário digitar o número até que o valor seja válido.
// Tiago Brandão
// 25/03/2026
#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("Digite um número: ");
        scanf("%i", &num);
        if (num > 10 || num < 0)
        {
            printf("Digite um valor válido!\n");
        }
    }while ((num > 10) || (num < 10));
    return 0;
}