#include <stdio.h>

int main()
{
  int row, col;
  scanf("%d %d", &row, &col);

  int matrix[row][col];
  int count_col[col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\n");
  for (int i = 0; i < col; i++)
  {
    int count = 0;
    for (int j = 0; j < row; j++)
    {
      if (matrix[j][i] != 0)
        count++;
    }
    count_col[i] = count;
  }
  for (int x = 0; x < col; x++)
  {
    printf("%d ", count_col[x]);
  }
  return 0;
}