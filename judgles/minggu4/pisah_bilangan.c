#include <stdio.h>
int main()
{
  double n;
  scanf("%lf", &n);

  long long bulat_n = (long long)n;

  double desimal_n = n - bulat_n;
  printf("%lld %.5f\n", bulat_n, desimal_n);
}