#include <stdio.h>

int main()
{
  int n, S;
  int count = 0;
  scanf("%d %d", &n, &S);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] - arr[i] == S)
      {
        count++;
      }
    }
  }
  printf("%d ", count);

  return 0;
}