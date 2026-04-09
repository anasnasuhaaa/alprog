#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    int num;
    scanf("%d", &num);

    int asli = num;
    int balik = 0;

    while (num > 0)
    {
      int digit = num % 10;
      balik = balik * 10 + digit;
      num = num / 10;
    }

    if (asli == balik)
    {
      printf("1\n");
    }
    else
    {
      printf("0\n");
    }
  }
}