#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  if (n == 1 || (n % 5 == 1 && n % 3 == 1))
  {
    printf("TEMPE DAN PISGOR");
  }
  else if (n % 3 == 1)
  {
    printf("TEMPE");
  }
  else if (n % 5 == 1)
  {
    printf("PISGOR");
  }
  else
  {
    printf("KOSONG");
  }
  return 0;
}