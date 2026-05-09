#include <stdio.h>

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int *p_arr = arr;
  printf("%d %d %d", *p_arr, p_arr[1], *(p_arr + 1));
  return 0;
}