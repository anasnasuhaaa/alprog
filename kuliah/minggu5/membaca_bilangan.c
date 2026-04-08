#include <stdio.h>

int main()
{
  int k, m, n;
  scanf("%d %d %d", &k, &m, &n);
  int matrix[k];

  for (int i = 0; i < k; i++)
  {
    int elemen;
    scanf("%d", &elemen);
    matrix[i] = elemen;
  }

  int cur_index = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (cur_index >= k)
      {
        printf("0 ");
      }
      else
      {
        printf("%d ", matrix[cur_index]);
        cur_index++;
      }
    }
    printf("\n");
  }
  return 0;
}