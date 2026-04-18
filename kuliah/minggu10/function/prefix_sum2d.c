#include <stdio.h>

void prefix_sum2d(int row, int col, int arr[row][col], int result[row][col])
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      result[i][j] = arr[i][j];

      if (i > 0)
        result[i][j] += result[i - 1][j];

      if (j > 0)
        result[i][j] += result[i][j - 1];

      if (i > 0 && j > 0)
        result[i][j] -= result[i - 1][j - 1];
    }
  }
}

int main()
{
  int row, col;
  scanf("%d %d", &row, &col);

  int arr[row][col];
  int result[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  prefix_sum2d(row, col, arr, result);

  printf("\nResult:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}