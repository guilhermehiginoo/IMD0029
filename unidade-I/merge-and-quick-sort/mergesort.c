// Mergesort

#include <stdio.h>

void merge(int v[], int inicio, int meio, int fim)
{
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int v1[n1], v2[n2];
    // Esses são vetores auxiliares


    for(i = 0; i < n1; i++)
        v1[i] = v[inicio + i];
    for(j = 0; j < n2; j++)
        v2[j] = v[meio + 1 + j];

    // Copia os valores do vetor original e aloca nos auxiliares

    i = 0;
    j = 0;
    k = inicio;
    while(i < n1 && j < n2){
        if(v1[i] <= v2[j]){
            v[k] = v1[i];
            i++;
        }else{
            v[k] = v2[j];
            j++;
        }
        k++;
    }
    // Compara elemento por elemento em cada um dos 2 vetores e insere o menor no vetor original

    while(i < n1){
        v[k] = v1[i];
        i++;
        k++;
    }
    // Se ainda tiver item sobrando em algum vetor (v1 ou v2), ele joga o que sobrou direto

    while(j < n2){
        v[k] = v2[j];
        j++;
        k++;
    }
}

void merge_sort(int v[], int inicio, int fim)
{
    if(inicio < fim){
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(v, inicio, meio);
        merge_sort(v, meio + 1, fim);
        // Divide as partes criando várias listas

        merge(v, inicio, meio, fim);
        // Junta tudo, ordenada, com a função merge
    }
}

void exibe_vetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    // Função para imprimir o vetor ordenado na tela
    // Chamada duas vezes na main, pois printa o vetor antes e depois de ordenar
}

int main()
{
    int v[] = {12, 9, 10, 13, 11, 14}, n = 6;

    printf("vetor de entrada: \n");
    exibe_vetor(v, n);

    merge_sort(v, 0, n - 1);

    printf("vetor ordenado: \n");
    exibe_vetor(v, n);
    
    return 0;
}
