#include <stdio.h>

void swapArray(int n, int a[n])
{

  printf("\nAfter Swap: \n");
  for (int j = n - 1; j >= 0; j--)
  {
    printf("%d ", a[j]);
  }
}

int main()
{
  int n;
  printf("Ukuran Array: ");
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("\nYour Array: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  swapArray(n, arr);
  return 0;
}