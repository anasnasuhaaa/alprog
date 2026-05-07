#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int j, k;
  while (j != -9)
  {
    int temp = 0;
    scanf("%d", &j);
    if (j == -9)
      break;
    scanf("%d", &k);
    for (int i = 0; i <= k - j; i++)
    {
      temp += arr[j + i - 1];
    }
    printf("%d\n", temp);
  }

  return 0;
}