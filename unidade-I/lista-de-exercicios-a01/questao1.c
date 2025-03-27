#include <stdio.h>

int combinations(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return combinations(n - 1, k - 1) + combinations(n - 1, k);
}

int main()
{
    int n, k;
    printf("Insert value for n and k:\n");
    scanf("%d %d", &n, &k);

    int result = combinations(n, k);
    printf("%d", result);

    return 0;
}