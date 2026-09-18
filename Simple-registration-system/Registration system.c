#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa pessoas[100];
    int total = 0;
    int opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nDigite o nome: ");
            scanf(" %[^\n]", pessoas[total].nome);

            printf("Digite a idade: ");
            scanf("%d", &pessoas[total].idade);

            total++;

            printf("Cadastro Concluido!\n");
        }

        else if (opcao == 2) {
            printf("\n--- LISTA ---\n");

            for (int i = 0; i < total; i++) {
                printf("Nome: %s | Idade: %d\n", pessoas[i].nome, pessoas[i].idade);
            }
        }

    } while (opcao != 0);

    return 0;
}