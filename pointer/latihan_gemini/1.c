#include <stdio.h>

int main()
{
  int angka[] = {10, 20, 30, 40, 50};
  int *p = angka;

  p = p + 2;
  printf("%d ", *p);

  *p = *p + 5;
  printf("%d ", angka[2]);

  p--;
  printf("%d\n", *p);

  return 0;
}