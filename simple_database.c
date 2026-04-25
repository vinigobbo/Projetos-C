#include <stdio.h>

struct Usuario {
    int id;
    char nome[50];
    int idade;
};

int main() {
    struct Usuario usuarios[100];
    int totalUsuarios = 0;
    int opcao;
    do {
        printf ("\n=== MENU ===\n");
        printf ("1 - Cadastrar\n");
        printf ("2 - Listar\n");
        printf ("3 - Remover\n");
        printf ("4 - Editar\n");
        printf ("0 - Sair\n");

        printf ("Opcao: ");
        scanf ("%d", &opcao);

        if (opcao == 1) {
            struct Usuario novo;

            printf ("Insira o ID: ");
            scanf ("%d", &novo.id);

            printf ("Insira o Nome: ");
            scanf ("%s", novo.nome);

            printf ("Insira a Idade: ");
            scanf ("%d", &novo.idade);

            usuarios[totalUsuarios] = novo;
            totalUsuarios++;

            printf ("Usuario cadastrado!\n");
        }

        else if (opcao == 2) {
            if (totalUsuarios == 0) {
                printf ("Nenhum usuario cadastrado!\n");
            } else {
                for (int i = 0; i < totalUsuarios; i++) {
                    printf ("\nID: %d\n", usuarios[i].id);
                    printf ("Nome: %s\n", usuarios[i].nome);
                    printf ("Idade: %d\n", usuarios[i].idade);
                }
            }
        }

        else if (opcao == 3) {
            int id;
            printf ("Digite o ID para remover: ");
            scanf ("%d", &id);

            int encontrado = -1;

            for (int i = 0; i < totalUsuarios; i++) {
                if (usuarios[i].id == id) {
                    encontrado = i;
                    break;
                }
            }

            if (encontrado == -1) {
                printf ("Usuario nao encontrado!\n");
            } else {
                for (int i = encontrado; i < totalUsuarios - 1; i++) {
                    usuarios[i] = usuarios[i + 1];
                }

                totalUsuarios--;
 
                printf ("Usuario removido com sucesso!\n");
            }
        }
        else if (opcao == 4) {
            int id;
            printf ("Digite o ID para editar: ");
            scanf ("%d", &id);

            int encontrado = -1;
            for (int i = 0; i < totalUsuarios; i++) {
                if (usuarios[i].id == id) {
                    encontrado = i;
                }   

            }
            
            if (encontrado == -1) {
                printf ("Usuario não encontrado!\n");           
            } else {
                printf ("Insira o Novo nome: \n");
                scanf ("%s", usuarios[encontrado].nome);

                printf ("Insira a Nova idade: \n");
                scanf ("%d", &usuarios[encontrado].idade);

                printf ("Usuario atualizado com sucesso!\n");
            }

        }

    } while (opcao != 0);

    return 0;
}