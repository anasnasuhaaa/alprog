#include <stdio.h>
#include <stdlib.h>
void printLn(int n, int *arr)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d", arr[i]);
    if (i < n - 1)
      printf(" ");
  }
}
int main()
{
  int *dt, n, x;
  printf("Ukuran Array: ");
  scanf("%d", &n);

  dt = (int *)malloc(n * sizeof(int));
  printf("\nMasukkan Array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    dt[i] = x;
  }
  printLn(n, dt);
  return 0;
}