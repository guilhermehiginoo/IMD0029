#include <stdio.h>

int is_even(char *str, int position)
{
    if (str[position] == '\0')
        return 1;
    if ((str[position] - '0') % 2 == 0)
        return is_odd(str, position + 1);
    return 0;
}

int is_odd(char *str, int position)
{
    if (str[position] == '\0')
        return 1;
    if ((str[position] - '0') % 2 != 0)
        return is_even(str, position + 1);
    return 0;
}

int main()
{
    int n;
    char str[200];
    int i = 0;

    printf("Insert a number: \n");
    scanf("%d", &n);

    sprintf(str, "%d", n);

    if (str[i] % 2 == 0)
        if (is_even(str, i))
            printf("The number %d alternates correctly starting with even!", n);
        else
            printf("The number %d does not alternate correctly...", n);
    else if (is_odd(str, i))
        printf("The number %d alternates correctly starting with odd!", n);
    else
        printf("The number %d does not alternate correctly...", n);

    return 0;
}