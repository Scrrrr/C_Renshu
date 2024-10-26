#include<stdio.h>

void incliment(int mx[][4])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            mx[i][j]++;
        }
    }

}

int main(void)
{
    int matrix[3][4] = {
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6},
    };

    incliment(matrix);

    for(int i = 0; i < 3; i++)
    {
        putchar('{');
        for(int j = 0; j < 4; j++)
        {
            printf("%d", i,j,matrix[i][j]);
            putchar(',');
        }
        putchar('}');
        putchar('\n');
    }
    
}