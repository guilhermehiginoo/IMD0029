#include <stdio.h>
#include "aluno.h"

void aluno_print(const Aluno *a)
{
    printf("%d | %-40s | %.2f\n",
           a->matricula, a->nome, a->nota);
}
