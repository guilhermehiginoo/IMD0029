#include <stdio.h>

void changeValue(int a, int b)
{
    int change = a;
    a = b;
    b = change;

    printf("Values after changes: %d %d", a, b);

    return 0;
}

int main()
{
    int a, b;

    printf("Insert values:\n");
    scanf("%d %d", &a, &b);

    printf("Values before changes: %d e %d\n", a, b);
    changeValue(a, b);

    return 0;
}