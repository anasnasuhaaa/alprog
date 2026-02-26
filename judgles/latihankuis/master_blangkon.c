#include <stdio.h>
int main()
{

  int a, b, c, k;
  scanf("%d %d %d %d", &a, &b, &c, &k);

  if ((a >= 1 && a <= 100) && (b >= 1 && b <= 100) && (c >= 1 && c <= 100) && (k == 0 || k == 1))
  {
    if (k == 0)
    {
      if ((a >= b) && (a >= c) && (b >= c))
      {
        printf("%d %d %d", a, b, c);
      }
      else if ((a >= b) && (a >= c) && (c >= b))
      {
        printf("%d %d %d", a, c, b);
      }
      else if ((b >= a) && (b >= c) && (a >= c))
      {
        printf("%d %d %d", b, a, c);
      }
      else if ((b >= a) && (b >= c) && (c >= a))
      {
        printf("%d %d %d", b, c, a);
      }
      else if ((c >= a) && (c >= b) && (a >= b))
      {
        printf("%d %d %d", c, a, b);
      }
      else if ((c >= a) && (c >= b) && (b >= a))
      {
        printf("%d %d %d", c, b, a);
      }
    }
    else if (k == 1)
    {
      if ((a <= b) && (a <= c) && (b <= c))
      {
        printf("%d %d %d", a, b, c);
      }
      else if ((a <= b) && (a <= c) && (c <= b))
      {
        printf("%d %d %d", a, c, b);
      }
      else if ((b <= a) && (b <= c) && (a <= c))
      {
        printf("%d %d %d", b, a, c);
      }
      else if ((b <= a) && (b <= c) && (c <= a))
      {
        printf("%d %d %d", b, c, a);
      }
      else if ((c <= a) && (c <= b) && (a <= b))
      {
        printf("%d %d %d", c, a, b);
      }
      else if ((c <= a) && (c <= b) && (b <= a))
      {
        printf("%d %d %d", c, b, a);
      }
    }
  }

  return 0;
}