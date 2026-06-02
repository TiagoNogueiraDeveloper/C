// Dosagem de medicamento: Escreva um programa que, a partir da idade e peso informado pelo
// usuário, calcule a dosagem de um medicamento e exiba quantas gotas do medicamento deve-se tomar por
// dose. Considere que o medicamento possui 500 mg por ml, e que cada ml corresponde a 20 gotas.
//  Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 quilos
// devem tomar 1000 mg; com peso abaixo de 60 quilos devem tomar 875 mg.
//  Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso corpóreo
// conforme a tabela a seguir:
// 10/04/2026
// Tiago Brandão

#include <stdio.h>

int AdultoCrianca (int idade, int peso);

int main(){ 
    // Declaração variável
    int idadeinput, pesoinput;
    // Entrada de dados
    printf("Digite a idade: ");
    scanf("%i", &idadeinput);
    printf("Digite o peso: ");
    scanf("%i", &pesoinput);
    // Saída
    printf("Deve tomar %i gotas\n", AdultoCrianca(idadeinput, pesoinput));
    return 0;
}

int AdultoCrianca (int idade, int peso) // Função de verificação da quantidade necessária de gotas
{
    if (idade >= 12 && peso >= 60)
    {
        return(40);
    }
    else
    {
    if (idade >= 12 && peso <= 60)
        {
            return (35);
        }
        else
        {
            if (idade < 12 && peso >= 5 && peso <= 9)
            {
                return(5);
            }
            else
            {
                if (idade < 12 && peso >= 9.1 && peso <= 16)
                {
                    return(10);
                }
                else
                {
                    if (idade < 12 && peso >= 16.1 && peso <= 24)
                    {
                        return (15);
                    }
                    else
                    {
                        if (idade < 12 && peso >= 24.1 && peso <= 30)
                        {
                            return(20);
                        }
                        else
                        {
                            return(30);
                        }
                    }
                }
            }
        }
    }
}
