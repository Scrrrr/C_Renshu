#include <stdio.h>

void increment(int mx[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mx[i][j]++;
        }
    }
}

int main(void)
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6}
    };

    for (int i = 0; i < 3; i++)
    {
        putchar('{');
        for (int j = 0; j < 4; j++)
        {
            printf("%d", i,j,matrix[i][j]);
            putchar(',');
        }
        putchar('}');
        putchar('\n');
    }
    printf("----------------------------------\n");

    increment(matrix, 3, 4);

    for (int i = 0; i < 3; i++)
    {
        putchar('{');
        for (int j = 0; j < 4; j++)
        {
            printf("%d", i,j,matrix[i][j]);
            putchar(',');
        }
        putchar('}');
        putchar('\n');
    }

    return 0;
}
