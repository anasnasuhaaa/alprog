#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // dma int
  int n;
  scanf("%d", &n);
  int *dtA;
  dtA = (int *)malloc(n * sizeof(int));
  memset(dtA, 5, (n * sizeof(int)));

  // for (int i = 0; i < n; i++)
  // {
  //   scanf("%d", &dtA[i]);
  // }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", dtA[i]);
  }

  // dma string
  free(dtA);
  return 0;
}