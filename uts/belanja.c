// Total Belanja
#include <stdio.h>
int main()
{
  double p;
  int n;
  scanf("%lf %d", &p, &n);

  double harga = (p * n) * 1.1;

  printf("%.2lf", harga);

  return 0;
}