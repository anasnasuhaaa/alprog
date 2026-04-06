#include <stdio.h>

int main()
{
  int n, x, count_lulus = 0;
  scanf("%d %d", &n, &x);

  int nilai[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &nilai[i]);
    if (nilai[i] >= x)
    {
      count_lulus++;
    }
  }

  printf("Jumlah lulus: %d\n", count_lulus);
  if (count_lulus)
  {
    for (int i = 0; i < n; i++)
    {
      if (nilai[i] >= x)
      {
        printf("%d ", nilai[i]);
      }
    }
  }
  else
  {
    printf("Tidak ada yang lulus");
  }
  return 0;
}