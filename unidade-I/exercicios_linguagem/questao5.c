#include <stdio.h>

int main() {
    int a, b, c, d, e; 
    int *v1 = &a, *v2 = &b, *v3 = &c, *v4 = &d, *v5 = &e; 
    int change, soma;

  
    printf("Insert values:\n");
    scanf("%d %d %d %d %d", v1, v2, v3, v4, v5);


    printf("\nValues before changes:\n");
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", *v1, *v2, *v3, *v4, *v5);

 
    change = *v1;
    *v1 = *v5;
    *v5 = *v4;
    *v4 = *v3;
    *v3 = *v2;
    *v2 = change;

    
    printf("\nValues after changes:\n");
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", *v1, *v2, *v3, *v4, *v5);

  
    soma = *v1 + *v2 + *v3 + *v4 + *v5;


    printf("\nThe sum is %d\n", soma);

    return 0;
}