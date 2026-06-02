#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int opcao; // Criacao da variavel que vai armazenar a escolha
    do
    {
        // Menu de interacao
        printf("Bem-vindo ao menu da livraria!\n");
        printf("Digite a sua opção: \n");
        printf("(0) para Cadastrar Livro\n");
        printf("(1) para Listar Livros\n");
        printf("(2) Buscar Livro\n");
        printf("(3) Sair\n");
        scanf("%i", &opcao);
        switch (opcao) // Trata da variavel opcao
        {
        case 0: // Em caso de 0
            printf("Livro cadastrado com sucesso!\n");
            fflush(stdout);
            sleep(5);
            system("clear");
            break;
        case 1: // Em caso de 1
            printf("Listando livros.\n");
            fflush(stdout);
            sleep(5);
            system("clear");
            break;
        case 2: // Em caso de 2
            printf("Digite o título para busca: \n");
            fflush(stdout);
            sleep(5);
            system("clear");
            break;
        default: // se nao
            break;
        }
    }while (opcao != 3);
    return 0;
}