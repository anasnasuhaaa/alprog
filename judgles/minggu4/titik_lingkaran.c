#include <stdio.h>

int main()
{
  int r;
  scanf("%d", &r);

  int x, y;
  int dalam = 0, luar = 0;

  while (1)
  {
    scanf("%d", &x);

    if (x == -999)
      break;

    scanf("%d", &y);

    int jarak2 = x * x + y * y;
    int r2 = r * r;

    if (jarak2 < r2)
    {
      dalam++;
    }
    else if (jarak2 > r2)
    {
      luar++;
    }
  }

  printf("%d %d\n", dalam, luar);

  return 0;
}