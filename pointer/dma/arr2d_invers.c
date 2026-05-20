#include <stdio.h>
#include <stdlib.h>

// int (*invers(int row, int col, int (*arr)[col]))[col]
// int (*invers(int row, int col, int (*arr)[col]))[col]
// {
//   int (*result)[col];
//   result = malloc(row * sizeof(*result));

//   for (int i = 0; i < col; i++)
//   {
//     for (int j = 0; j < row; j++)
//     {
//       result[i][j] = arr[i][j];
//     }
//   }
//   return result;
// }

void printLn(int row, int col, int (*arr)[col])
{
  printf("Ini adalah outputnya: \n");
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      printf("%d", arr[i][j]);
      if (j == row - 1)
        printf("\n");
      else
        printf(" ");
    }
  }
}
int main()
{
  int row, col;
  printf("Masukkan baris dan kolong: ");
  scanf("%d %d", &row, &col);

  int (*dtArr)[col];
  dtArr = (int (*)[col])malloc(row * col * sizeof(int));

  printf("Masukkan nilai matrix: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &dtArr[i][j]);
    }
  }

  // int (*result)[col];
  // result = invers(row, col, dtArr);
  printLn(row, col, dtArr);

  free(dtArr);
  // free(result);
  return 0;
}