#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    // Declaracao variaveis
    int conta_opcao, opcao_operacao;
    float saldo, deposito, retirada, saldo_c2, deposito_c2, retirada_c2;
    saldo = 0; // Defino saldo zero da primeira conta para que haja simulacao completa
    saldo_c2 = 0; // Defino saldo zero da segunda conta para que haja simulacao completa
    do
    {
        // Menu de interacao do sistema
        printf("Digite a operação a ser utilizada: \n");
        printf("(1) Retirada de dinheiro\n");
        printf("(2) Depósito de dinheiro\n");
        printf("(3) Verificação de saldo\n");
        printf("(0) Finalizar programa\n");
        scanf("%i", &opcao_operacao); // Selecao da operacao desejada pelo usuario
        if (opcao_operacao == 1) // Opcao retirada
        {
            printf("Digite a conta ser utilizada: \n");
            printf("(1) para conta de número um\n");
            printf("(2) para conta de número dois\n");
            scanf("%i", &conta_opcao); // Selecao da conta deseja pelo usuario
            if (conta_opcao == 1)
            {
                printf("Digite a quantidade a ser retirada: \n");
                scanf("%f", &retirada);
                if (retirada <= saldo) // Operacao de retirada do saldo na primeira conta
                {
                    saldo = saldo - retirada;
                    printf("Retirada realizada com sucesso!\n");
                    // Tempo antes de voltar ao menu
                    fflush(stdout);
                    sleep(2);
                    system("clear");
                }
                else // Em caso de retirada maior que o saldo disponivel
                {
                    printf("A retirada excede o saldo!\n");
                    // Tempo antes de voltar ao menu
                    fflush(stdout);
                    sleep(2);
                    system("clear");
                }
            }
            if (conta_opcao == 2)
            {
                printf("Digite a quantidade a ser retirada: \n");
                scanf("%f", &retirada_c2);
                if (retirada_c2 <= saldo_c2) // Operacao de retirada do saldo na segunda conta
                {
                    saldo_c2 = saldo_c2 - retirada_c2;
                    printf("Retirada realizada com sucesso!\n");
                    // Tempo antes de voltar ao menu
                    fflush(stdout);
                    sleep(2);
                    system("clear");
                }
                else // Em caso de retirada maior que o saldo disponivel
                {
                    printf("A retirada excede o saldo!\n");
                    // Tempo antes de voltar ao menu
                    fflush(stdout);
                    sleep(2);
                    system("clear");
                }
            }
        } 

        if (opcao_operacao == 2) //  Opcao deposito
        {
            printf("Digite a conta ser utilizada: \n");
            printf("(1) para conta de número um\n");
            printf("(2) para conta de número dois\n");
            scanf("%i", &conta_opcao);
            if (conta_opcao == 1) // Operacao de deposito de saldo na primeira conta
            {
                printf("Digite o valor a ser depositado na conta um: \n");
                scanf("%f", &deposito);
                saldo = saldo + deposito;
                printf("Saldo depositado com sucesso!\n");
                // Tempo antes de voltar ao menu
                fflush(stdout);
                sleep(2);
                system("clear");
            }
            else // Operacao de deposito de saldo na segunda conta
            {
                printf("Digite o valor a ser depositado na conta dois: \n");
                scanf("%f", &deposito_c2);
                saldo_c2 = saldo_c2 + deposito_c2;
                printf("Saldo depositado com sucesso!\n");
                // Tempo antes de voltar ao menu
                fflush(stdout);
                sleep(2);
                system("clear");
            }
        }
        if (opcao_operacao == 3) // Opcao de verificacao do saldo
        {
            printf("Digite a conta ser utilizada: \n");
            printf("(1) para conta de número um\n");
            printf("(2) para conta de número dois\n");
            scanf("%i", &conta_opcao);
            if (conta_opcao == 1) // Operacao de verificacao de saldo da primeira conta
            {
                printf("O saldo da conta um é R$%.2f\n", saldo);
                // Tempo antes de voltar ao menu
                fflush(stdout);
                sleep(2);
                system("clear");
            }
            else // Operacao de verificacao de saldo da segunda conta
            {
                printf("O da conta dois é R$%.2f\n", saldo_c2);
                // Tempo antes de voltar ao menu
                fflush(stdout);
                sleep(2);
                system("clear");
            }
        }
    }
    while (opcao_operacao != 0); // Fecha ciclo
}