#include <stdio.h>

int main()
{

  int row, col;
  printf("Masukkan baris dan kolom: ");
  scanf("%d %d", &row, &col);

  int matrix[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\n");
  printf("Before Flip: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d", matrix[i][j]);
      if (j == col - 1)
        printf("\n");
      else
        printf(" ");
    }
  }

  printf("\n");
  printf("After Flip: \n");
  for (int i = row - 1; i >= 0; i--)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d", matrix[i][j]);
      if (j == col - 1)
        printf("\n");
      else
        printf(" ");
    }
  }

  return 0;
}