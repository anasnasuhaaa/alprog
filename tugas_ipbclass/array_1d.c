#include <stdio.h>
int main()
{
  int arr[] = {1, 3, 5, 7, 9};
  int l = 0, r = 4, x = 6, ans = -1;
  while (l <= r)
  {
    int m = (l + r) / 2;
    if (arr[m] < x)
      l = m + 1;
    else if (arr[m] > x)
      r = m - 1;
    else
    {                                                                                                                                                                               
      ans = m;
      break;
    }
  }
  printf("%d\n", ans);

   int arr2[] = {4, -1, 2, 1};
    int p[4];
    p[0] = arr2[0];
    for (int i = 1; i < 4; i++) {
        p[i] = p[i-1] + arr2[i];
    }
    for (int i = 0; i < 4; i++) {
        printf("%d ", p[i]);
    }

  return 0;
}