#include <stdio.h>
void prefixSum(int n, int arr[])
{
  int res[n];
  for (int i = 0; i < n; i++)
  {
    // for (int j = 0; j < n - 1; j++)
    //   int sum = 0;
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

  // printf("\nIni: ");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d ", arr[i]);
  // }
  prefixSum(n, arr);
  return 0;
}