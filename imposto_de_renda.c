#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
const float valor_dependente = 20;
int main()
{
    int n_dependente, prosseguir;
    float cpf, rendimento_mensal, contribuição, calculo_valor_deducoes, deducao_dependente, rendimento_menos_deducao, imposto_final;

    do
    {
        // Captura de dados
        printf("\nDigite o seu cpf: \n");
        scanf("%f", &cpf);
        printf("\nDigite o seu rendimento mensal: ");
        scanf("%f", &rendimento_mensal);
        printf("\nDigite o seu contribuição provisória: ");
        scanf("%f", &contribuição);
        printf("\nDigite o seu número de dependentes: ");
        scanf("%i", &n_dependente);
        // Operacoes
        deducao_dependente = n_dependente * valor_dependente;
        calculo_valor_deducoes = contribuição + deducao_dependente;
        rendimento_menos_deducao = rendimento_mensal - calculo_valor_deducoes;

        if (rendimento_menos_deducao > 0 && rendimento_menos_deducao <= 100.00) // Isencao do imposto
        {
            imposto_final = rendimento_menos_deducao;
            printf("O imposto final é R$%.2f", imposto_final);
            // Tempo antes de voltar ao menu
            fflush(stdout);
            sleep(4);
            system("clear");
        }
        else
        {
            if (rendimento_menos_deducao > 100 && rendimento_menos_deducao < 200) // Aplicacao de imposto ficticio
            {
                imposto_final = (rendimento_menos_deducao * 0.15) - 16.00;
                printf("O imposto final é R$%.2f", imposto_final);
                // Tempo antes de voltar ao menu
                fflush(stdout);
                sleep(4);
                system("clear");
            }
            else
            {
                imposto_final = (rendimento_menos_deducao * 0.25) - 30.00; // Aplicacao de imposto ficticio de outra faixa salarial
                printf("O imposto final é R$%.2f", imposto_final);
                // Tempo antes de voltar ao menu
                fflush(stdout);
                sleep(4);
                system("clear");
            }
        }
        printf("Digite (0) para calcular mais um imposto de renda!\n");
        scanf("%i", prosseguir);
    } while (prosseguir == 0); // fecha ciclo
    
}