#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *dtA, *dtB, x;
  int size_a = 0, size_b = 0;

  dtA = (int *)malloc(size_a * sizeof(int));
  dtB = (int *)malloc(size_b * sizeof(int));

  while (scanf("%d", &x) == 1 && x != -9)
  {
    size_a++;
    dtA = (int *)realloc(dtA, size_a * sizeof(int));
    dtA[size_a - 1] = x;
  }

  while (scanf("%d", &x) == 1 && x != -9)
  {
    size_b++;
    dtB = (int *)realloc(dtB, size_b * sizeof(int));
    dtB[size_b - 1] = x;
  }

  int j = 0, k = 0;
  int first = 1;

  while (j < size_a && k < size_b)
  {
    if (!first)
    {
      printf(" ");
    }

    if (dtA[j] <= dtB[k])
    {
      printf("%d", dtA[j]);
      j++;
    }
    else
    {
      printf("%d", dtB[k]);
      k++;
    }

    first = 0;
  }

  // Cetak sisa elemen dtA jika masih ada
  while (j < size_a)
  {
    if (!first)
    {
      printf(" ");
    }

    printf("%d", dtA[j]);
    j++;
    first = 0;
  }

  // Cetak sisa elemen dtB jika masih ada
  while (k < size_b)
  {
    if (!first)
    {
      printf(" ");
    }

    printf("%d", dtB[k]);
    k++;
    first = 0;
  }

  printf("\n");

  free(dtA);
  free(dtB);
  return 0;
}