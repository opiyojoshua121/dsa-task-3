#include <stdio.h>

int main()
{
    int matrix[4][4] = {
        {0, 0, 3, 0},
        {0, 0, 0, 0},
        {5, 0, 0, 8},
        {0, 2, 0, 0}};

    int nonZero = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] != 0)
                nonZero++;
        }
    }

    // 3-tuple representation: [Row, Column, Value]
    int sparse[nonZero + 1][3];
    sparse[0][0] = 4;       // Total rows
    sparse[0][1] = 4;       // Total columns
    sparse[0][2] = nonZero; // Total non-zero elements

    int k = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    printf("Row\tCol\tValue\n");
    for (int i = 0; i <= nonZero; i++)
    {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
