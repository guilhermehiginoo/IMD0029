#include <stdio.h>
#include <stdlib.h>


int main() {
    int *v1 = (int *) malloc(sizeof(int));
    int *v2 = (int *) malloc(sizeof(int));
    int *v3 = (int *) malloc(sizeof(int));
    int *v4 = (int *) malloc(sizeof(int));
    int *v5 = (int *) malloc(sizeof(int));

    int sum = 0;


    printf("Insert values:\n");
    scanf("%d %d %d %d %d", v1, v2, v3, v4, v5);

    sum = *v1 + *v2 + *v3 + *v4 + *v5;

    printf("\nThe sum is %d\n", sum);

    free(v1);
    free(v2);
    free(v3);
    free(v4);
    free(v5);

    return 0;
}
