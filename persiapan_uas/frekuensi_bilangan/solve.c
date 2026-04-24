#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];

  int res[n][2];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  return 0;
}