#include <stdio.h>

int menor(int n1, int n2, int n3);

int main()
{
    int num1, num2, num3;
    printf("Digite o valor do número 1: ");
    scanf("%i", &num1);
    printf("Digite o valor do número 2: ");
    scanf("%i", &num2);
    printf("Digite o valor do número 3: ");
    scanf("%i", &num3);
    printf("O menor valor é: %i", menor(num1, num2, num3));
    return 0;
}
int menor(int n1, int n2, int n3)
{
    if (n1<n2 && n1<n3)
    {
        return (n1);
    }
    else
    {
        if (n2<n3 && n2<n1)
        {
            return (n2);
        }
        else
        {
            return (n3);
        }
    }
}