#include <stdio.h>

int main()
{
  int n, count = 0;
  printf("Masukkan ukuran: ");
  scanf("%d", &n);

  int arr[n * n];

  while (count < (n * n) - 1)
  {
    for (int i = 1; i <= 9; i++)
    {
      arr[count] = i;
      count++;
    }
  }

  for (int i = 0; i < (n * n); i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}