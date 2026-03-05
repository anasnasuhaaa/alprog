#include <stdio.h>
int main()
{
  int x, y, z;
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  if (x >= y && x >= z)
  {
    if (y >= z)
    {
      printf("%d \n", z);
      printf("%d \n", x);
      printf("%d \n", y);
    }
    else
    {
      printf("%d \n", y);
      printf("%d \n", x);
      printf("%d \n", z);
    }
  }
  else if (y >= x && y >= z)
  {
    if (x >= z)
    {
      printf("%d \n", z);
      printf("%d \n", y);
      printf("%d \n", x);
    }
    else
    {
      printf("%d \n", x);
      printf("%d \n", y);
      printf("%d \n", z);
    }
  }
  else if (z >= x && z >= y)
  {
    if (x >= y)
    {
      printf("%d \n", y);
      printf("%d \n", z);
      printf("%d \n", x);
    }
    else
    {
      printf("%d \n", x);
      printf("%d \n", z);
      printf("%d \n", y);
    }
  }
}