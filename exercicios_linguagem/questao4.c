#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int randomNum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            randomNum = rand() % 100;
            matriz[i][j] = randomNum;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    int sum = matriz[0][0] + matriz[1][1] + matriz[2][2];
    printf("The sum is %d\n", sum);

    return 0;
}