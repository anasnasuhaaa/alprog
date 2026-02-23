#include <stdio.h>
int main()
{
  int a;
  int b;
  int c;

  scanf("%d %d %d", &a, &b, &c);

  if ((c < a) && (c < b))
  {
    printf("kiri");
  }
  else if ((c > a) && (c > b))
  {
    printf("kanan");
  }
  else if ((c > a) && (c < b))
  {
    printf("tengah");
  }
  else if ((c == a) || (c == b))
  {
    printf("tepi");
  }

  return 0;
}