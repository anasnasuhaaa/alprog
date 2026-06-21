#include <stdio.h>
#include <stdlib.h>

void printArr(int n, int arr[n])
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{

  int dt1[] = {1, 2, 3, 4, 4};
  // 1 int = 4 byte;
  // dt1 = 5 elemen x 4 byte = 20 byte
  int dt2[] = {3, 44, 3, 4, 4};
  int dt3[] = {54, 2, 55, 4, 4};

  printArr(sizeof(dt1) / sizeof(int), dt1);
  printArr(sizeof(dt2) / sizeof(int), dt2);
  printArr(sizeof(dt3) / sizeof(int), dt3);

  // for (int i = 0; i < (sizeof(dt1) / sizeof(int)); i++)
  // {
  //   printf("%d ", dt1[i]);
  // }
  // printf("\n");
  // for (int i = 0; i < (sizeof(dt2) / sizeof(int)); i++)
  // {
  //   printf("%d ", dt2[i]);
  // }
  //  printf("\n");
  // for (int i = 0; i < (sizeof(dt3) / sizeof(int)); i++)
  // {
  //   printf("%d ", dt3[i]);
  // }

  return 0;
}