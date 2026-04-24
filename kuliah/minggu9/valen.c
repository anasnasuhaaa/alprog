#include <stdio.h>

int main()
{
  int m, n;
  scanf("%d %d", &m, &n);
  int matriks[m][n];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &matriks[i][j]);
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = n - 1; j >= 0; j--)
    {
      printf("%d", matriks[i][j]);
      if (j == 0)
      {
        printf("\n");
      }
      else
      {
        printf(" ");
      }
    }
  }

  return 0;
}