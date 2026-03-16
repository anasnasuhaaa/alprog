#include <stdio.h>
int main()
{
  int n;

  scanf("%d", &n);
  int arrNum[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arrNum[i]);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arrNum[j] < arrNum[j + 1])
      {
        int temp = arrNum[j];
        arrNum[j] = arrNum[j + 1];
        arrNum[j + 1] = temp;
      }
    }
  }

  int res = 0;
  for (int i = 0; i < 3; i++)
  {
    res += arrNum[i];
  }
  printf("%d", res);

  return 0;
}