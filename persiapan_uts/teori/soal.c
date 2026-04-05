#include <stdio.h>

int main()
{
  int n_23;
  for (int i = 0; i <= 4; i++)
  {
    for (int j = 5 - i; j >= 1; j--)
    {
      printf("*");
    }
    printf("\n");
    /* code */
  }

  // int arr[] = {2, 3, 1, 4};
  // printf("%d", sizeof(arr));
  int a;
  float c = 9, b = 45;
  a = b / c;
  printf("%f %f \n", c, b);
  printf("%d", a);
  return 0;
}