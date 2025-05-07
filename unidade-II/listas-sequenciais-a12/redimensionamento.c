#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p;
  int n, i;

  n = 5;
  p = (int*) malloc(n * sizeof(int));

  if(p == NULL){
    printf("Erro na alocação de memória.\n");
    return 1;
  }

  printf("Memória alocada usando malloc:\n");
  for(i = 0; i < n; i++){
    p[i] = i + 1;
    printf("%d ", p[i]);
  }
  printf("\n");

  free(p);

  p = (int*) calloc(n, sizeof(int));

  if(p == NULL){
    printf("Erro na alocação de memória com calloc.\n");
    return 1;
  }

  printf("Memória alocada usando calloc (inicializada com 0):\n");
  for(i = 0; i < n; i++){
    printf("%d ", p[i]);
  }
  printf("\n");

  n = 10;
  p = (int*) realloc(p, n * sizeof(int));

  if(p == NULL){
    printf("Erro na re-alocação de memória.\n");
    return 1;
  }

 printf("Memória redimensionada usando realloc:\n");
 for(i = 5; i < n; i++){
   p[i] = i + 1;
 }

  for(i = 0; i < n; i++){
    printf("%d ", p[i]);
  }
  printf("\n");

  free(p);
  printf("Memória liberada com sucesso.\n");

  return 0;
}
