#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int larik[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &larik[i]);
  }
  for (int i = 0; i < n; i++)
  {
    if (larik[i] < 0)
    {
      printf("%d\n", larik[i]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (larik[i] == 0)
    {
      printf("%d\n", larik[i]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (larik[i] > 0)
    {
      printf("%d\n", larik[i]);
    }
  }

  return 0;
}