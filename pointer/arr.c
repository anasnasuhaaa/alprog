#include <stdio.h>

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int *p_arr = arr;
  printf("%d %d %d", *p_arr, p_arr[1], *(p_arr + 1));
  printf("\n");

  int arr2[] = {10, 20, 30, 40, 50, 60};
  int *ptr1 = arr2;
  int *ptr2 = arr2 + 5;
  printf("%d\n", ptr2 - ptr1);
  printf("%d", *ptr2);
  // printf("%d\n", (ptr2 - ptr1));
  return 0;
}