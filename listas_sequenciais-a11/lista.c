#include <stdio.h>
#include <stdbool.h>
#include "lista.h"

void inicializa_lista(Lista *l) {
    l->numAlunos = 0;
}

int tamanho(Lista *l) {
    return l->numAlunos;
}

int busca(Lista *l, int matricula) {
    for (int i = 0; i < l->numAlunos; i++) {
        if (matricula == l->dados[i].matricula)
            return i;
    }
    return -1;
}

void exibe_lista(Lista *l) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < l->numAlunos; i++) {
        printf("Matrícula: %d, Nome: %s, Nota: %.2f\n",
               l->dados[i].matricula, l->dados[i].nome, l->dados[i].nota);
    }
    if (l->numAlunos == 0) {
        printf("A lista está vazia.\n");
    }
}

bool insere(Lista *l, Dados d, int pos) {
    if ((l->numAlunos == MAX) || (pos < 0) || (pos > l->numAlunos))
        return false;
    for (int j = l->numAlunos; j > pos; j--)
        l->dados[j] = l->dados[j - 1];
    l->dados[pos] = d;
    l->numAlunos++;
    return true;
}

bool remove(int matricula, Lista *l) {
    int pos = busca(l, matricula);
    if (pos == -1)
        return false;
    for (int j = pos; j < l->numAlunos - 1; j++)
        l->dados[j] = l->dados[j + 1];
    l->numAlunos--;
    return true;
}

void reinicializa_lista(Lista *l) {
    l->numAlunos = 0;
}