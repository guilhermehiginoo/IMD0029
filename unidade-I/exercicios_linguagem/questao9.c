#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *data;
    char text;

    data = fopen("C:\\Users\\guiil\\IMD0029-ESTRUTURA-DE-DADOS-BASICAS\\exercicios_linguagem\\dados.txt",
                 "r");

    if (data == NULL)
    {
        printf("There was an error opening the file\n");
        exit(1);
    }

    while ((text = fgetc(data)) != EOF)
    {
        putchar(text);
    }

    fclose(data);

    return 0;
}