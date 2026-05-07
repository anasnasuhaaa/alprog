#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *A, *B;
  int capacityA = 10, capacityB = 10;
  int n = 0, m = 0;
  int x;

  A = (int *)malloc(capacityA * sizeof(int));
  B = (int *)malloc(capacityB * sizeof(int));

  if (A == NULL || B == NULL)
  {
    return 1;
  }

  // Membaca deretan A sampai -9
  while (scanf("%d", &x) == 1 && x != -9)
  {
    if (n == capacityA)
    {
      capacityA *= 2;
      A = (int *)realloc(A, capacityA * sizeof(int));

      if (A == NULL)
      {
        return 1;
      }
    }

    A[n] = x;
    n++;
  }

  // Membaca deretan B sampai -9
  while (scanf("%d", &x) == 1 && x != -9)
  {
    if (m == capacityB)
    {
      capacityB *= 2;
      B = (int *)realloc(B, capacityB * sizeof(int));

      if (B == NULL)
      {
        return 1;
      }
    }

    B[m] = x;
    m++;
  }

  // Merge tanpa sorting
  int i = 0, j = 0;
  int first = 1;

  while (i < n && j < m)
  {
    if (!first)
    {
      printf(" ");
    }

    if (A[i] <= B[j])
    {
      printf("%d", A[i]);
      i++;
    }
    else
    {
      printf("%d", B[j]);
      j++;
    }

    first = 0;
  }

  // Cetak sisa A
  while (i < n)
  {
    if (!first)
    {
      printf(" ");
    }

    printf("%d", A[i]);
    i++;
    first = 0;
  }

  // Cetak sisa B
  while (j < m)
  {
    if (!first)
    {
      printf(" ");
    }

    printf("%d", B[j]);
    j++;
    first = 0;
  }

  printf("\n");

  free(A);
  free(B);

  return 0;
}