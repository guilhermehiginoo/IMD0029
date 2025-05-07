#ifndef LISTA_H
#define LISTA_H

#include <stdbool.h>
#include "aluno.h"

#define MAX 100

typedef struct {
    Aluno v[MAX];
    int n;
} Lista;

void lista_init(Lista *l);
bool lista_add(Lista *l, Aluno a);
bool lista_del(Lista *l, int matricula);
void lista_print(const Lista *l);

#endif
