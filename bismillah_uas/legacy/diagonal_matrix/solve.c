#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int sum_dg1 = 0;
  int sum_dg2 = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        sum_dg1 += arr[i][j];
      if (i + j == n - 1)
        sum_dg2 += arr[i][j];
    }
  }

  printf("%d %d", sum_dg1, sum_dg2);
};
