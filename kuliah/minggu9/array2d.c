#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int sizeArr = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < sizeArr; i++)
  {
    printf("%d ", arr[i]);
  }

  int revArr[sizeArr];
  int n = sizeArr;
  for (int i = 0; i < sizeArr; i++)
  {
    revArr[i] = arr[--n];
  }

  printf("\n\n");
  for (int i = 0; i < sizeArr; i++)
  {
    printf("%d ", revArr[i]);
  }

  // Array 2D
  // int row, col;

  int arr2d[][3] = {{1, 2, 3}, {3, 2, 1}};
  printf("Di bawah ini adalah penerapan Array 2D: \n");
  printf("%d\n", arr2d[0][0]);
  printf("%d\n", arr2d[0][1]);
  printf("%d\n", arr2d[1][0]);

  int row, col;
  printf("Masukkan jumlah baris dan kolom: ");
  scanf("%d %d", &row, &col);

  int matrix[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d", matrix[i][j]);
      if (col - 1 == j)
        printf("\n");
      else
        printf(" ");
    }
  }

  return 0;
}