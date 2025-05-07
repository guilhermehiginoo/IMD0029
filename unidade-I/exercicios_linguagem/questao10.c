#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *data;
    data = fopen("dados.txt", "a");
    char text[50];    

    if (data == NULL)
    {
        perror("There was an error writing the file");
        exit(1);
    }

    printf("Write your text below:\n\n");
    fgets(text, sizeof(text), stdin);


    fprintf(data, "Inserting line:\n%s", text);

    // Fecha o arquivo
    fclose(data);

    printf("Line inserted successfully.\n");
}