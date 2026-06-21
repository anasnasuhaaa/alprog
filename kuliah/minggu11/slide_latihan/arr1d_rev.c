#include <stdio.h>
#include <stdlib.h>

int *balik(int n, int *a)
{
  int *t;
  t = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    t[i] = a[n - i - 1];
  }
  return t;
}

void printLn(int n, int arr[n])
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

  dt = malloc(n * sizeof(int)); // 4 Bytes * n
  printf("\nMasukkan Array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    dt[i] = x;
  }
  int *res = balik(n, dt); // {5,4,3,2,1}

  
  printLn(n, res);
  return 0;
}