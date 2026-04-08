#include <stdio.h>

int main()
{
  long long x, y;
  scanf("%lld %lld", &x, &y);

  long long base = x / y;
  long long sisa = x % y;

  for (long long i = 0; i < y; i++)
  {
    if (i < y - sisa)
    {
      printf("%lld", base);
    }
    else
    {
      printf("%lld", base + 1);
    }
    if (i < y - 1)
    {
      printf(" ");
    }
  }

  printf("\n");

  return 9;
}