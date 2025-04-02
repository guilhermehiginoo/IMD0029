#include <stdio.h>

int searchNum(int i, int n, int v[], int search)
{
    if (i > n - 1)
    {
        return -1;
    }

    if (v[i] == search)
    {
        return i;
    }

    return searchNum(i + 1, n, v, search);
}

int main()
{
    int i = 0;
    int searchFor = 0;
    int v[10];
    int size = sizeof(v) / sizeof(int);

    for (int j = 0; j < size; j++)
    {
        printf("%d - Insert a number:\n\n", j + 1);
        scanf("%d", &v[j]);
    }

    printf("What is the number you want to search?\n");
    scanf("%d", &searchFor);

    int result = searchNum(i, size, v, searchFor);
    printf("The number %d is at position %d\n", searchFor, result);

    return 0;
}