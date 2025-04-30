#include <stdio.h>
#include "alunos.h"

void cadastrar_aluno(Lista *lista) {
    Dados aluno;
    int pos;

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno.nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);
    printf("Digite a posição para inserir (0 a %d): ", tamanho(lista));
    scanf("%d", &pos);

    if (insere(lista, aluno, pos)) {
        printf("Aluno cadastrado com sucesso!\n");
    } else {
        printf("Erro ao cadastrar aluno. Verifique a posição ou se a lista está cheia.\n");
    }
}

void exibir_alunos(Lista *lista) {
    exibe_lista(lista);
}

void remover_aluno(Lista *lista) {
    int matricula;
    printf("Digite a matrícula do aluno a ser removido: ");
    scanf("%d", &matricula);

    if (remove(matricula, lista)) {
        printf("Aluno removido com sucesso!\n");
    } else {
        printf("Erro ao remover aluno. Matrícula não encontrada.\n");
    }
}

void buscar_aluno(Lista *lista) {
    int matricula;
    printf("Digite a matrícula do aluno a ser buscado: ");
    scanf("%d", &matricula);

    int pos = busca(lista, matricula);
    if (pos != -1) {
        printf("Aluno encontrado: Matrícula: %d, Nome: %s, Nota: %.2f\n",
               lista->dados[pos].matricula, lista->dados[pos].nome, lista->dados[pos].nota);
    } else {
        printf("Aluno não encontrado.\n");
    }
}