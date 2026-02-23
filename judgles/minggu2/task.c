#include <stdio.h>
int main()
{
  double number;
  scanf("%lf", &number);
  double result = number / 1.15;
  printf("%.2lf", result);
  return 0;
}