#include <stdio.h>

int main()
{
  int n, total_jarak = 0;
  scanf("%d", &n);
  int kecepatan[n], waktu[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &kecepatan[i], &waktu[i]);
    if (i == 0)
    {
      total_jarak += kecepatan[i] * waktu[i];
    }
    else
    {
      total_jarak += kecepatan[i] * (waktu[i] - waktu[i - 1]);
    }
  }
  printf("%d", total_jarak);

  return 0;
}