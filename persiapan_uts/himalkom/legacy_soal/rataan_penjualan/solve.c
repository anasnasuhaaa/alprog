#include <stdio.h>

int main()
{
  int n, q;
  scanf("%d %d", &n, &q);

  int arr[n];
  float final[q];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int a, b;
  for (int i = 0; i < q; i++)
  {
    float res = 0.00;
    scanf("%d %d", &a, &b);

    for (int i = a - 1; i < b; i++)
    {
      res += arr[i];
    }
    final[i] = res /= ((b - a) + 1);
  }

  for (int i = 0; i < q; i++)
  {
    printf("%.2lf \n", final[i]);
  }
  return 0;
}