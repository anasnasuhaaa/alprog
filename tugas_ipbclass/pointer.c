#include <stdio.h>
// int what(int *b)
// {
//   int a = 20;
//   *b = 12;
//   return (5);
// }
int main()
{
  //   int a = 5;
  //   int b;
  //   b = what(&a);
  //   printf("%d %d", a, b); // 12 5
  //   return 0;
  int arr[5] = {125, 100, 135, 90, 5};
  int *ptr1 = &arr[1];
  int *ptr2 = arr + 3;

  printf("%d", ptr1[1] + ptr2[1]);

  return 0;
}