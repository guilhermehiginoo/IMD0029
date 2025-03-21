#include <stdio.h>

void changeValue(int *a, int *b)
{
    int change = *a;
    *a = *b;
    *b = change;
}

int main()
{
    int a, b;

    printf("Insert values:\n");
    scanf("%d %d", &a, &b);

    printf("Values before changes: %d and %d\n", a, b);
    changeValue(&a, &b);

    printf("Values after changes: %d and %d", a, b);

    return 0;
}