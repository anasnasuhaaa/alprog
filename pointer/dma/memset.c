#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *dt;
  int n = 5;

  dt = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    printf("%d ", dt[i]);
  }

  return 0;
}