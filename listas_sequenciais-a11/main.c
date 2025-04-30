#include <stdio.h>
#include <string.h>
#include "lista.h"

static void menu(void)
{
    puts("1-Criar  2-Excluir  3-Listar  0-Sair");
    printf("> ");
}

int main(void)
{
    Lista L;
    lista_init(&L);
    int op;

    do {
        menu();
        if (scanf("%d", &op) != 1) return 1;
        getchar();  // consome o '\n'

        if (op == 1) {
            Aluno a;
            printf("Matrícula: ");
            scanf("%d", &a.matricula); getchar();

            printf("Nome: ");
            fgets(a.nome, 60, stdin);
            a.nome[strcspn(a.nome, "\n")] = '\0';

            printf("Nota: ");
            scanf("%f", &a.nota); getchar();

            if (lista_add(&L, a)) {
                puts(">> Inserido!\n");
            } else {
                puts(">> ERRO (cheia ou duplicada)!\n");
            }

        } else if (op == 2) {
            int mat;
            printf("Matrícula a remover: ");
            scanf("%d", &mat); getchar();

            if (lista_del(&L, mat)) {
                puts(">> Removido!\n");
            } else {
                puts(">> Matrícula não encontrada!\n");
            }

        } else if (op == 3) {
            lista_print(&L);
        }

    } while (op != 0);

    puts("Falou!");
    return 0;
}
