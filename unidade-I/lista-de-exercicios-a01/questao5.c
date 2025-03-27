#include <stdio.h>
#include <string.h>

char is_Palindrome(char* word, int left, int right)
{
    if (left >= right)
        return 1;
    if (word[left] != word[right])
        return 0;

    return is_Palindrome(word, left + 1, right - 1);
}

int main()
{
    char str[200];

    printf("Insert the word to check if it is palindrome:\n");
    scanf("%s", &str);

    int length = strlen(str) - 1;

    if (is_Palindrome(str, 0, length))
        printf("The word '%s' is palindrome!", str);
    else
        printf("The word '%s' is not a palindrome...", str);

    return 0;
}