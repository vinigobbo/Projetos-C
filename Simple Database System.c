#include <stdio.h>

int main () {

struct Usuario {
    int id;
    char nome; 
    int idade;
}
    struct Usuario usuarios[100]
    int totalUsuarios = 0

        int opcao

        do {
            printf ("\n=== MENU ===\n");
            printf ("1 - Cadastrar\n");
            printf ("2 - Listar\n");
            printf ("0 - Sair\n")

            printf ("Opacao: ");
            scanf ("%d", &opcao);

            if (opcao == 1) {
                struct Usuario novo 

                printf ("Insira o ID: ");
                scanf ("%d", &novo.id);

                printf ("Insira o Nome: ");
                scanf ("%s", &novo.nome);

                printf (Insira a Idade: );
                scanf ("%d", &novo.idade);

                usuarios[totalUsuarios] = novo;
                totalUsuarios++
            }
            
            else if (opcao == 2) {
                if (totalUsuarios == 0) {
                    printf ("Nenhum Usuario Encontrado!\n")
                } else {
                    for (int i = 0, i < totalUsuarios, i++) {
                        printf ("\nID: %d\n", usuarios[i].id);
                        printf ("Nome: %s\n", usuarios[i].nome);
                        printf ("Idade: %s\n", usuarios[i].idade);


                    }

                }

            }
        
        














        } while (opcao != 0);

     return 0;
    } 
