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

    printf("元の配列:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("{");
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matrix[i][j]);
            if (j < 3) printf(", ");
        }
        printf("}\n");
    }

    increment(matrix, 3, 4);

    printf("\nインクリメント後の配列:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("{");
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matrix[i][j]);
            if (j < 3) printf(", ");
        }
        printf("}\n");
    }

    return 0;
}