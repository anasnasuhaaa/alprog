#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *dtA, row, col, x;

  printf("Masukkan Baris dan Kolom: ");
  scanf("%d %d", &row, &col);

  dtA = (int *)malloc(row * col * sizeof(int));
  printf("Masukkan isi matrix:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &x);
      dtA[i * col + j] = x;
    }
  }

  printf("Ini adalah matrixnya: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d", dtA[i * col + j]);
      if (j == col - 1)
        printf("\n");
      else
        printf(" ");
    }
  }
  return 0;
}