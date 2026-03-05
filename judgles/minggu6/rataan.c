#include <stdio.h>

int main()
{
  int n, k;
  long long sum = 0;
  int count = 0;

  scanf("%d %d", &n, &k);

  for (int x = 0; x < n; x++)
  {
    int number;
    scanf("%d", &number);

    if (k > 0 && (x + 1) % k == 0)
    {
      sum += number;
      count++;
    }
  }

  if (count == 0)
  {
    printf("0.00\n");
  }
  else
  {
    double result = (double)sum / count;
    printf("%.2lf\n", result);
  }

  return 0;
}