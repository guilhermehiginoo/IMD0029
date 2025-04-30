#include <stdio.h>
#include <string.h>
#include "lista.h"

int posicao(const Lista *l, int mat)
{
    for (int i = 0; i < l->n; ++i)
        if (l->v[i].matricula == mat)
            return i;
    return -1;
}

void lista_init(Lista *l)
{
    l->n = 0;
}

bool lista_add(Lista *l, Aluno a)
{
    if (l->n == MAX || posicao(l, a.matricula) != -1)
        return false;
    l->v[l->n++] = a;
    return true;
}

bool lista_del(Lista *l, int mat)
{
    int p = posicao(l, mat);
    if (p == -1)
        return false;
    memmove(&l->v[p], &l->v[p + 1], (l->n - p - 1) * sizeof(Aluno));
    l->n--;
    return true;
}

void lista_print(const Lista *l)
{
    puts("\n--- LISTA DE ALUNOS ---");
    for (int i = 0; i < l->n; ++i)
        printf("%d | %-40s | %.2f\n",
               l->v[i].matricula, l->v[i].nome, l->v[i].nota);
    puts("-----------------------\n");
}
