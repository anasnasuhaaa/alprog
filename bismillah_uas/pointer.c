#include <stdio.h>
int main()
{
  int *p, *q;
  int a[5] = {1, 2, 3, 4, 5};
  p = &a[0];
  q = &a[2];
  printf("%d %d %d\n", *p, p[0], a[0]);
  printf("%d %d %d\n", *(p + 1), p[1], a[1]);
  printf("%d %d\n", *q, q[1]);
  return 0;
}