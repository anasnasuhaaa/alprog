#include <stdio.h>

void change(int a, int *b)
{
  a += 10;
  *b = 100;
}

int main()
{
  int x = 5, y = 5;
  change(x, &y);
  printf("%d %d", x, y);
  return 0;
}
