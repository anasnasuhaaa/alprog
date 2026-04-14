#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int sizeArr = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < sizeArr; i++)
  {
    printf("%d ", arr[i]);
  }

  int revArr[sizeArr];
  int n = sizeArr;
  for (int i = 0; i < sizeArr; i++)
  {
    revArr[i] = arr[--n];
  }

  printf("\n\n");
  for (int i = 0; i < sizeArr; i++)
  {
    printf("%d ", revArr[i]);
  }

  return 0;
}