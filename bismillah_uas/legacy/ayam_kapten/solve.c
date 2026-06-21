#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  if (scanf("%d", &n) != 1)
    return 0;

  int ayam[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ayam[i]);
  }

  int kapten[n];
  int count_kapten = 0;

  int max_kapten = ayam[n - 1];
  kapten[count_kapten++] = n;

  for (int i = n - 2; i >= 0; i--)
  {
    if (ayam[i] > max_kapten)
    {
      max_kapten = ayam[i];
      kapten[count_kapten++] = i + 1;
    }
  }

  printf("%d\n", count_kapten);
  for (int i = count_kapten - 1; i >= 0; i--)
  {
    printf("%d ", kapten[i]);
  }

  return 0;
}