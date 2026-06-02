#include <math.h>
int potencia(int base, int expoente){
    return(pow(base,expoente));
}

int quadrado(int numero){
    return(numero*numero);
}

int fatorial(int numero){
    int i;
    int fatorial;
    fatorial = 1;
    for (i = numero; i >= 1; i--)
    {
        fatorial = fatorial * i;
    }
    return (fatorial);
}

int VerificarPrimo(int numero){
    int i, contador;
    contador = 0;
    i = 1;
    for (i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            contador++;
        }
        i++;
    }
    if (contador == 2)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int VerificarParidade(int par)
{
    if ((par % 2) == 0)
    {
        return (1);
    }
    else
    {
        return(0);
    }
}