#include <stdio.h>

int main()
{
  int n, count_perpindahan = 0;
  scanf("%d", &n);

  int arr_gigi[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr_gigi[i]);
  }

  count_perpindahan++;
  int prev = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int cur = 0;
    if (arr_gigi[i + 1] > arr_gigi[i])
      cur = 1;
    else if (arr_gigi[i + 1] < arr_gigi[i])
      cur = -1;
    else
      cur = 0;

    if (cur != 0 && cur != prev)
    {
      count_perpindahan++;
      prev = cur;
    }
  }
  count_perpindahan++;
  printf("%d", count_perpindahan);
  return 0;
}