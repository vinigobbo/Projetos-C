#include <stdio.h>
#include <string.h>

int main() {
    int opcao;

    char nome[50];
    char senha[50];
    int usuario = 0;

    float saldo = 0;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Cadastrar\n");
        printf("2 - Login\n");
        printf("0 - Sair\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite seu nome: ");
            scanf("%s", nome);

            printf("Digite sua senha: ");
            scanf("%s", senha);

            usuario = 1;

            printf("Usuario criado com sucesso!\n");
        }

        else if (opcao == 2) {

            if (usuario == 0) {
                printf("Nenhum usuario cadastrado!\n");
            } else {
                char nomeLog[50];
                char senhaLog[50];

                printf("Nome: ");
                scanf("%s", nomeLog);

                printf("Senha: ");
                scanf("%s", senhaLog);

                if (strcmp(nome, nomeLog) == 0 && strcmp(senha, senhaLog) == 0) {
                    printf("Login realizado com sucesso!\n");

                    int opcaoB;

                    do {
                        printf("\n=== MENU BANCO ===\n");
                        printf("1 - Ver saldo\n");
                        printf("2 - Depositar\n");
                        printf("3 - Sacar\n");
                        printf("0 - Logout\n");

                        printf("Opcao: ");
                        scanf("%d", &opcaoB);

                        if (opcaoB == 1) {
                            printf("Saldo: %.2f\n", saldo);
                        }

                        else if (opcaoB == 2) {
                        float valor;
                            printf("Valor: ");
                            scanf("%f", &valor);

                            if (valor > 0) {
                                saldo += valor;
                                printf("Deposito realizado!\n");
                            }
                        }

                        else if (opcaoB == 3) {
                        float valor;
                            printf("Valor: ");
                            scanf("%f", &valor);

                            if (valor <= saldo) {
                                saldo -= valor;
                                printf("Saque realizado!\n");
                            } else {
                                printf("Saldo insuficiente!\n");
                            }
                        }

                    } while (opcaoB != 0);

                } else {
                    printf("Nome ou senha incorretos!\n");
                }
            }
        }

    } while (opcao != 0);

    
    return 0;
}