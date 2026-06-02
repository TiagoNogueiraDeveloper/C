// Leia três valores e informe se eles podem formar um
// triângulo. Se sim, classifique em:
// • Equilátero
// • Isósceles
// • Escaleno
// Tiago Brandão
// 18/03/2026
#include <stdio.h>
int main()
{
    int valor1, valor2, valor3;
    printf("Digite o valor do primeiro lado: ");
    scanf("%i", &valor1);
    printf("Digite o valor do segundo lado: ");
    scanf("%i", &valor2);
    printf("Digite o valor do terceiro lado: ");
    scanf("%i", &valor3);
    if (valor1 == valor2 && valor1 == valor3)
    {
        printf("É um triângulo equilátero!\n");
    }
    else
    {
        if (valor1 != valor2 && valor2 != valor3)
        {
            printf("É um triângulo escaleno!\n");
        }
        else
        {
            printf("É um triângulo isósceles!\n");
        }
    }
    return 0;
}