#ifndef LISTA_H
#define LISTA_H
#define MAX 100

typedef struct
{
    int matricula;
    char nome[50];
    float nota;
} Dados;

typedef struct
{
    Dados dados[MAX];
    int numAlunos;
} Lista;

void inicializa_lista(Lista *l);
int tamanho(Lista *l);
int busca(Lista *l, int ch);
void exibe_lista(Lista *l);
bool insere(Lista *l, Dados d, int pos);
bool remove(int ch, Lista *l);
void reinicializa_lista(Lista *l);

#endif
