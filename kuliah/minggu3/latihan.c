#include <stdio.h>

int main()
{
  //  int a=5;
  //  while (a--);
  //  printf("%d\n",a);

  // No 2
  // int a, b, res;
  // scanf("%d %d", &a, &b);
  // while (b)
  // {
  //   res = a % b;
  //   a = b;
  //   b = res;
  // }
  // printf("%d\n", a);

  // No 3
  // int a, b;
  // long int hasil = 1;
  // scanf("%d %d", &a, &b);
  // while (--a)
  // {
  //   hasil *= b;
  // }
  // printf("%ld\n", hasil);

  // No 4
  // int a = 1, n = 10;
  // while (++a < n)
  //   printf("HELLO %d\n", a++);

  // No 5
  // int x = 5, y = 0;
  // while (x > 0)
  // {
  //   int z = x % 2;
  //   y = y * 100 + z;
  //   x = x / 2;
  // }
  // printf("%d", y);

  // No 6
  // int x = 5, y = 0;
  // while (x > 0)
  // {
  //   int z = x % 2;
  //   y = y * 100 + z;
  //   x = x + 2;
  //   y = x + y;
  // }
  // printf("%d", y);

  // No 7
  // int a = 10;
  // printf("a1=%d", ++a);
  // printf("a2=%d", a++);
  // printf("a3=%d", a);

  // No 9
  // int a = 100, b = 5;
  // while (a < b)
  //   b = b + 1;
  // a = a - b;
  // printf("%d %d", a, b);

  // No 10
  int a = 2, b = 3, c = 5;
  while (a-- > b)
    b += a;
  printf("%d %d %d\n", a, b, c);
  return 0;
}