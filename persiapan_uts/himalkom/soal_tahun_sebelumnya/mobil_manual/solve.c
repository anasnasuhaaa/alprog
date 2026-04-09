#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int ketinggian[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ketinggian[i]);
  }

  int perpindahan[n - 1];
  for (int i = 0; i < n - 1; n++)
  {
    if (ketinggian[i] > ketinggian[i + 1])
    {
      perpindahan[i] = 1;
    }
    else if (ketinggian[i] == ketinggian[i + 1])
    {
      perpindahan[i] = 2;
    }
    else
    {
      perpindahan[i] = 1;
    }
  }

  int jumlah_perpindahan = 2;
  for (int i = 0; i < n - 2; n++)
  {
    if (perpindahan[i] != perpindahan[i + 1])
      jumlah_perpindahan++;
  }
  printf("%d", jumlah_perpindahan);
  return 0;
}