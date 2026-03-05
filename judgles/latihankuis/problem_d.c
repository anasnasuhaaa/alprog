#include <stdio.h>

int main()
{
  int so, n, d;
  scanf("%d %d %d", &so, &n, &d);

  for (int i = 0; i < n; i++)
  {
    printf("%d\n", so + i * d);
  }

  return 0;
}
