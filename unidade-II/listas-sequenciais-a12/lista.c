#include <stdio.h>
#include <string.h>
#include "lista.h"

void lista_init(Lista *l) {
    l->n = 0;
}

bool lista_add(Lista *l, Aluno a) {
    if (l->n == MAX) {
        return false;
    }
    l->v[l->n] = a;
    l->n++;
    return true;
}

bool lista_del(Lista *l, int matricula) {
    int pos = -1;
    for (int i = 0; i < l->n; i++) {
        if (l->v[i].matricula == matricula) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        return false;
    }
    for (int i = pos; i < l->n - 1; i++) {
        l->v[i] = l->v[i + 1];
    }
    l->n--;
    return true;
}

void lista_print(const Lista *l) {
    for (int i = 0; i < l->n; i++) {
        printf("Matrícula: %d, Nome: %s, Nota: %.2f\n",
               l->v[i].matricula, l->v[i].nome, l->v[i].nota);
    }
}