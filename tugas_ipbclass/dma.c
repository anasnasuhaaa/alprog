#include <stdio.h>
#include <stdlib.h>

int main()
{
  // int *p = (int *)malloc(sizeof(int));
  // *p = 6;
  // ++*p;
  // printf("%d\n", *p);

  // int a[] = {1, 2, 3};
  // int *p = a;

  // printf("%d", sizeof(a));
  // printf("\n");

  // printf("%d", sizeof(p));
  // printf("\n");

  // printf("%d", sizeof(a) / sizeof(p));
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[1];
  float *ptr2 = ptr1 + 3;

  float hasil = *(ptr1 + 1) + 3;

  printf("%.lf\n", hasil);
  printf("%.1f\n", *ptr2);

  // printf("%.lf \n", ptr1);
  // printf("%.lf", *ptr1);

  // int arr[] = {10, 20, 30, 40, 50, 60};
  // int *ptr1 = arr;
  // int *ptr2 = arr + 5;
  // printf("%d\n", (ptr2 - ptr1));

  // printf("%d %d \n", *ptr1, *ptr2);
  // printf("%d", (*ptr2 - *ptr1));

  // int a[] = {1, 2, 3, 4, 5, 6};
  // int *ptr = (int *)(&a + 1);
  // printf("%d", *(ptr - 1));
  // return 0;

  return 0;
}