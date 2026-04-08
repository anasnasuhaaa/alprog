#include <stdio.h>

int main()
{

  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int curent_u = 0, curent_r = 0;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > arr[i - 1])
    {
      if (curent_u <= arr[i] - arr[i - 1])
        curent_u = arr[i] - arr[i - 1];
    }
    else if (arr[i] < arr[i - 1])
    {
      if (curent_r <= arr[i - 1] - arr[i])
        curent_r = arr[i - 1] - arr[i];
    }
  }

  printf("%d %d", curent_u, curent_r);
  return 0;
}