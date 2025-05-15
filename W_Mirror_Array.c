#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int integerArray[row][column];

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            scanf("%d", &integerArray[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        /* code */
        int l = column - 1;
        for (int j = 0; j < column; j++)
        {
            /* code */
            int tmp;

            if (j < l)
            {
                /* code */
                tmp = integerArray[i][j];
                integerArray[i][j] = integerArray[i][l];
                integerArray[i][l] = tmp;

                l--;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            printf("%d ", integerArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}