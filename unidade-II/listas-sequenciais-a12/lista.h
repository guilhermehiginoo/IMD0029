#ifndef LISTA_H
#define LISTA_H

#include <stdbool.h>
#include "aluno.h"

#define MAX 4          /* capacidade inicial e fator de crescimento */

typedef struct {
    Aluno *v;
    int n;
    int cap;
} Lista;

void lista_init   (Lista *l);
void lista_destroy(Lista *l);
bool lista_add    (Lista *l, Aluno a);
bool lista_del    (Lista *l, int matricula);
int  lista_busca  (const Lista *l, int matricula);
void lista_print  (const Lista *l);

#endif
