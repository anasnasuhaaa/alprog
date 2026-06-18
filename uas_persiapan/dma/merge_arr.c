#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m, n, x;
  scanf("%d %d", &m, &n);

  int *dtA, *dtB;
  dtA = (int *)malloc(m * sizeof(int));
  dtB = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < m; i++)
  {
    scanf("%d", &x);
    dtA[i] = x;
  }

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    dtB[i] = x;
  }

  int j = 0, k = 0;
  int first = 1;

  while (j < m && k < n)
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
  while (j < m)
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
  while (k < n)
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