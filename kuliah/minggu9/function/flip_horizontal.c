#include <stdio.h>

void flipHorizontal(int row, int col, int matrix[])
{
  int flipped_matrix[row * col];
  int flipped_matrix_index = 0;

  for (int i = 0; i < row; i++)
  {
    for (int j = col - 1; j >= 0; j--)
    {
      flipped_matrix[flipped_matrix_index++] = matrix[(i * col) + j];
    }
  }

  printf("\nFlipped Matrix: \n");

  int flipped_index = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d", flipped_matrix[flipped_index++]);
      if (j == col - 1)
        printf("\n");
      else
        printf(" ");
    }
  }
}

int main()
{
  int row, col;
  scanf("%d %d", &row, &col);

  int n = row * col;
  int matrix[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &matrix[i]);
  }

  int matrix_size = 0;
  printf("\nYour Matrix: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d", matrix[matrix_size++]);
      if (j == col - 1)
        printf("\n");
      else
        printf(" ");
    }
  }

  flipHorizontal(row, col, matrix);

  return 0;
}