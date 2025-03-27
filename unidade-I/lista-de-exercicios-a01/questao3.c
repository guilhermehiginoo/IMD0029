#include <stdio.h>

int sumOfDigits(char* str, int position, int sum) {
    if (str[position] == '\0') {
        return sum;
    } else {
        sum += str[position] - '0';
    // Subtrair a string por - '0' converte ele para inteiro
        return sumOfDigits(str, position + 1, sum);
    }
}

int main()
{
    int n;
    printf("Insert a number:\n");
    scanf("%d", &n);

    char str[200];
    sprintf(str, "%d", n);

    int result = sumOfDigits(str, 0, 0);
    printf("Sum of digits: %d\n", result);

    return 0;
}
