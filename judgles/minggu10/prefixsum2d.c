#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int prefix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &prefix[i][j]);
        }
    }

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = prefix[i][j];

            if (i > 0)
                arr[i][j] -= prefix[i - 1][j];

            if (j > 0)
                arr[i][j] -= prefix[i][j - 1];

            if (i > 0 && j > 0)
                arr[i][j] += prefix[i - 1][j - 1];
        }
    }

    int b, k;
    while (1)
    {
        scanf("%d", &b);
        if (b == -9) break;

        scanf("%d", &k);

        printf("%d ", arr[b - 1][k - 1]); // karena 1-based index
    }

    return 0;
}