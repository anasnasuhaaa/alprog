#include <stdio.h>
int main()
{
  int x, y;
  int sum = 0;

  scanf("%d %d", &x, &y);
  for (int i = 1; i <= x; i++)
  {
    for (int j = 1; j <= y; j++)
    {
      int angka;
      scanf("%d", &angka);
      sum += angka;
    }
    // sum += y;
  }
  printf("%d\n", sum);
}