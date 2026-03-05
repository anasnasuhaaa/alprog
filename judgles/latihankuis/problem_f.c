#include <stdio.h>
int main()
{
  int x, y, z;
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  int sum = x + y + z;
  if ((sum >= 200) && (x >= 50) && (y >= 50) && (z >= 50))
  {
    printf("Lolos\n");
  }
  else
  {
    printf("Tidak Lolos\n");
  }

  return 0;
}