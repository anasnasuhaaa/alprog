#include <stdio.h>

int main()
{
  int row, col;
  printf("Masukkan baris dan kolom: ");
  scanf("%d %d", &row, &col);

  int matrix[row][col];
  // int flip_matrix[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Before Flip
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

  // after
  printf("\nafter Flip: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = col - 1; j >= 0; j--)
    {
      printf("%d", matrix[i][j]);
      if (j == 0)
        printf("\n");
      else
        printf(" ");
    }
  }

  return 0;
}