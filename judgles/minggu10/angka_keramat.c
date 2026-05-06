#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  long long a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &a[i]);
  }

  int x = 0;
  long long sum = 0;
  long long count = 0;

  for (int r = 0; r < n; r++)
  {
    sum += a[r];

    while (sum > 47 && x <= r)
    {
      sum -= a[x];
      x++;
    }

    if (sum == 47)
    {
      count++;

      int temp = x;
      while (temp < r && a[temp] == 0)
      {
        count++;
        temp++;
      }
    }
  }

  printf("%lld\n", count);
  return 0;
}