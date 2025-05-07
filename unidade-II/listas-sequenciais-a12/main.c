#include <stdio.h>
#include <string.h>
#include "lista.h"

static void menu(void) {
    puts("1-Criar  2-Excluir  3-Listar  0-Sair");
    printf("> ");
}

static void criar_aluno(Lista *L) {
    Aluno a;
    printf("Matrícula: ");
    scanf("%d", &a.matricula);
    getchar();
    printf("Nome: ");
    fgets(a.nome, 60, stdin);
    a.nome[strcspn(a.nome, "\n")] = '\0';
    printf("Nota: ");
    scanf("%f", &a.nota);
    getchar();
    if (lista_add(L, a)) {
        puts(">> Inserido!\n");
    } else {
        puts(">> ERRO (lista cheia)!\n");
    }
}

static void remover_aluno(Lista *L) {
    int mat;
    printf("Matrícula a remover: ");
    scanf("%d", &mat);
    getchar();
    if (lista_del(L, mat)) {
        puts(">> Removido!\n");
    } else {
        puts(">> Matrícula não encontrada!\n");
    }
}

static void listar_alunos(const Lista *L) {
    lista_print(L);
}

int main(void) {
    Lista L;
    lista_init(&L);
    int op;
    do {
        menu();
        if (scanf("%d", &op) != 1) return 1;
        getchar();
        switch (op) {
            case 1:
                criar_aluno(&L);
                break;
            case 2:
                remover_aluno(&L);
                break;
            case 3:
                listar_alunos(&L);
                break;
            case 0:
                puts("Falou!");
                break;
            default:
                puts("Opção inválida!");
        }
    } while (op != 0);
    return 0;
}