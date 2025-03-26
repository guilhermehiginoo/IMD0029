#include <stdio.h>

int evenNumbers(int n, int count, int numbers, int sum)
{
    if (count == n || n == 0)
    {
        return sum;
    }

    if (numbers % 2 == 0)
    {
        sum += numbers;
        count++;
    }
        return evenNumbers(n, count, numbers + 1, sum);
}

int main()
{
    int n;
    int count = 0;
    int numbers = 1;
    int sum = 0;

    printf("Insert value for n\n");
    scanf("%d", &n);

    int result = evenNumbers(n, count, numbers, sum);

    printf("%d", result);

    return 0;
}
