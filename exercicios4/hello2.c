#include <stdio.h>


 int maiormenor(int n1, int n2)
{
    if (n1 > n2)
    {
        return (n1);
    }
    else
    {
        return (n2);
    }
}




int main()
{
    int numero1, numero2;
    numero1 = 4;
    numero2 = 5;
    printf("\n \n O maior número é = %i", maiormenor(numero1,numero2));
    return 0;
}