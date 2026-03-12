#include <stdio.h>

int main()
{
  long long N;
  scanf("%lld", &N);

  for (long long i = 1; i <= N; i++)
  {
    long long odd = 2 * i - 1;
    long long even = 2 * (N - i + 1);

    printf("%lld %lld", odd, even);

    if (i < N)
    {
      printf(" ");
    }
  }

  printf("\n");
  return 0;
}