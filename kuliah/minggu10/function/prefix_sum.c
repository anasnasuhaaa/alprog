#include <stdio.h>
void prefixSum(int n, int arr[])
{
  int res[n];
  int prev = 0;
  for (int i = 0; i < n; i++)
  {
    prev += arr[i];
    res[i] = prev;
  }
  printf("\nIni: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", res[i]);
  }
}
int main()
{
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  prefixSum(n, arr);
  return 0;
}