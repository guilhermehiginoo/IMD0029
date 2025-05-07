#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

static bool garante_espaco(Lista *l)
{
    if (l->n < l->cap) return true;
    int novo_cap = l->cap * 2;
    Aluno *tmp = realloc(l->v, novo_cap * sizeof *tmp);
    if (!tmp) return false;
    l->v = tmp;
    l->cap = novo_cap;
    return true;
}

void lista_init(Lista *l)
{
    l->v = malloc(MAX * sizeof *l->v);
    l->n = 0;
    l->cap = l->v ? MAX : 0;
}

void lista_destroy(Lista *l)
{
    free(l->v);
    l->v = NULL;
    l->n = l->cap = 0;
}

int lista_busca(const Lista *l, int chave)
{
    int ini = 0, fim = l->n - 1;
    while (ini <= fim) {
        int meio = (ini + fim) / 2;
        if (l->v[meio].matricula == chave) return meio;
        if (l->v[meio].matricula < chave)  ini = meio + 1;
        else                               fim = meio - 1;
    }
    return -1;
}

bool lista_add(Lista *l, Aluno a)
{
    if (!garante_espaco(l)) return false;
    int pos = 0;
    while (pos < l->n && l->v[pos].matricula < a.matricula) pos++;
    memmove(&l->v[pos + 1], &l->v[pos], (l->n - pos) * sizeof *l->v);
    l->v[pos] = a;
    l->n++;
    return true;
}

bool lista_del(Lista *l, int matricula)
{
    int idx = lista_busca(l, matricula);
    if (idx == -1) return false;
    memmove(&l->v[idx], &l->v[idx + 1], (l->n - idx - 1) * sizeof *l->v);
    l->n--;
    return true;
}

void lista_print(const Lista *l)
{
    puts("-------- LISTA DE ALUNOS --------");
    for (int i = 0; i < l->n; ++i)
        printf("Mat: %d | Nome: %s | Nota: %.2f\n",
               l->v[i].matricula, l->v[i].nome, l->v[i].nota);
    puts("---------------------------------");
}
