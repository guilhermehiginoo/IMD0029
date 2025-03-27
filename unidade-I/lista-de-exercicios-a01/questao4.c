#include <stdio.h>

int exponential(int a, int b, int count)
{
    if (count == b || b == 0)
        return 1;

    return a * exponential(a, b, count + 1);
}

int main()
{
    int a, b;
    printf("Insert values for a and b:\n");
    scanf("%d %d", &a, &b);
    int count = 0;

    int result = exponential(a, b, count);
    printf("%d\n", result);

    return 0;
}