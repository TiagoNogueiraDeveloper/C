#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int opcao;
    do
    {
        printf("Bem-vindo ao menu da livraria!\n");
        printf("Digite a sua opção: \n");
        printf("(0) para Cadastrar Livro\n");
        printf("(1) para Listar Livros\n");
        printf("(2) Buscar Livro\n");
        printf("(3) Sair\n");
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 0:
            printf("Livro cadastrado com sucesso!\n");
            fflush(stdout);
            sleep(5);
            system("clear");
            break;
        case 1:
            printf("Listando livros.\n");
            fflush(stdout);
            sleep(5);
            system("clear");
            break;
        case 2:
            printf("Digite o título para busca: \n");
            fflush(stdout);
            sleep(5);
            system("clear");
            break;
        default:
            break;
        }
    }while (opcao != 3);
    return 0;
}