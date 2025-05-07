#include <stdio.h>

double calculate_sum(double vector[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += vector[i];
    }
    return sum;
}

int main()
{
    double vector[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%lf", &vector[i]);
    }

    double sum = calculate_sum(vector, 5);
    printf("The sum is %.2f", sum);

    return 0;
}