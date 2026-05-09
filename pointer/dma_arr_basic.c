#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size_A = 0, x;
  int *dtA = (int *)malloc(size_A * sizeof(int));

  while (scanf("%d", &x) == 1 && x != -9)
  {
    size_A++;
    dtA = (int *)realloc(dtA, size_A * sizeof(int));
    dtA[size_A - 1] = x;
  }

  int j = 0;
  printf("ini angkanya: ");
  while (j != size_A)
  {
    printf("%d ", dtA[j]);
    j++;
  }

  free(dtA);
  return 0;
}