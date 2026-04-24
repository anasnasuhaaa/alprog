#include <stdio.h>

int main()
{

  int m, n;
  scanf("%d %d", &m, &n);
  int matriks[m][n];
  int count[n];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &matriks[i][j]);
    }
  }

  for (int i = 0; i < m; i++)
  {
    if(i == 0){
      for (int j = 0; j < n; j++)
      {
        count[j] = 0;
      }
    }
    for (int j = 0; j < n; j++)
    {
      if (matriks[i][j] != 0)
      {
        count[j]++;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ", count[i]);
  }

  return 0;
}